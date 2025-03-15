// Variant 11 

#include <iostream>
#include <cmath>


int getFactorial(int x)
{
    unsigned long long result = 1;

    for (int i = 1; i <= x; ++i)
    {
        result *= i;
    }

    return result;
}


int main()
{
    int n;
    std::cout << "Input n: ";
    std::cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += getFactorial(i);
    }



    return 0;
}