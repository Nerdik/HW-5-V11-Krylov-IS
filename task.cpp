// Variant 11 

#include <iostream>
#include <cmath>


// int getFactorial(int x)
// {
//     unsigned long long result = 1;

//     for (int i = 1; i <= x; ++i)
//     {
//         result *= i;
//     }

//     return result;
// }


// int main()
// {
//     int n;
//     std::cout << "Input n: ";
//     std::cin >> n;

//     double sum = 0;

//     for (int i = 1; i <= n; ++i)
//     {
//         sum += getFactorial(i);
//     }



//     return 0;
// }


// Function for Exercise 1.
void ex1()
{
    int n;
    std::cout << "Input n: ";
    std::cin >> n;

    long long sum;

    if (n == 0)
    {
        sum = 1;
    }
    else
    {
        sum = 0;
        long long fact = 1;

        for (int i = 1; i <= n; ++i)
        {   
            sum += fact;
            fact *= (- 1) * (i + 1);
        }
    }
     
    std::cout << sum << std::endl;
}

// Function for Exercise 2.


// Function for Exercise 3.


// Function for Exercise 4.


int main()
{
    // Exercise 1.
    ex1();

    // Exercise 2.


    // Exercise 3.


    // Exercise 4.


    return 0;
}