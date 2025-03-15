// Variant 11 

#include <iostream>
#include <cmath>


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
void ex2()
{
    int n, x;
    std::cout << "Input n: ";
    std::cin >> n;
    std::cout << "Input x: ";
    std::cin >> x;

    double p = 1.0;

    for (int i = 1; i <= n; ++i)
    {
        double part = 1 + pow(x, i) / pow(i, 2);
        p *= part;
    }
    std::cout << p;
}

// Function for Exercise 3.


// Function for Exercise 4.


int main()
{
    // Exercise 1.
    // ex1();

    // Exercise 2.
    ex2();

    // Exercise 3.


    // Exercise 4.


    return 0;
}