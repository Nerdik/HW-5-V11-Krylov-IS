// Variant 11 

#include <iostream>
#include <cmath>
#include <iomanip>


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
void ex3()
{
    double eps;
    std::cout << "Input eps: ";
    std::cin >> eps;

    int i = 1;
    double part;
    double sum = 0;

    do
    {
        part = pow((- 1), 2 * i) / (i * (i + 1) * (i + 2));
        sum += part;
        ++i;
    } while (part > eps);
    
    std::cout << sum << std::endl;
}

// Functions for Exercise 4.
float ex4HelpFunction(float x, float eps, int &n)
{
    float sum = 0;
    float firstPart = 1 + x;

    sum += firstPart;
    int i = 2;
    double fact = 1;

    float nextPart;
    
    do
    {
        fact *= i;
        nextPart = pow(x, i) / fact;
        sum += nextPart;
        ++i;
        ++n;
    } while (nextPart > eps);
    
    return sum;
}

void ex4()
{
    double eps;

    std::cout << "Input eps: ";
    std::cin >> eps;

    std::cout << std::setprecision(3);

    std::cout << "№\t x\t f(x)\t n" << std::endl;

    float a = 0.0;
    float b = 1.0;
    float h = 0.1;
    float f, x;
    int n;
    int i = 1;

    for (x = a, i = 1; x <= b; x += h, ++i)
    {
        n = 0;
        f = ex4HelpFunction(x, eps, n);

        std::cout << i << "\t" << x << "\t" << f << "\t" << n << std::endl;
    }

    
}

int main()
{
    // Exercise 1.
    // ex1();

    // Exercise 2.
    // ex2();

    // Exercise 3.
    // ex3();

    // Exercise 4.
    ex4();

    return 0;
}
