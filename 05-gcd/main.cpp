#include <iostream>

using namespace std;

int gcdNaive(int a, int b)
{
    int smallerNumber = min(a, b);
    while (smallerNumber > 0)
    {
        if ((a % smallerNumber == 0) && (b % smallerNumber == 0))
        {
            break;
        }
        smallerNumber--;
    }
    return smallerNumber;
}

int gcdEuclideanBasic(int a, int b)
{
    while (a > 0 && b > 0 && a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    if (a > 0 && b > 0)
    {
        return a;
    }
    return -1;
}

int gcdEuclideanOptimizes(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return (b, a % b);
}

int main()
{
    int a = 75, b = 60;
    cout << "GCD of " << a << " : " << gcdNaive(a, b) << endl;
    cout << "GCD of " << a << " : " << gcdEuclideanBasic(a, b) << endl;
    return 0;
}