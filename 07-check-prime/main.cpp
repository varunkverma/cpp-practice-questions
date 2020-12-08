#include <iostream>
#include <math.h>

using namespace std;

// any prime > 3, is in the form 6n-1 or 6n+1
bool checkPrimeUsingFormula(int num)
{
    if (num == 2 || num == 3)
    {
        return true;
    }
    float c1 = (num + 1) % 6;
    float c2 = (num - 1) % 6;
    if ((c1 == 0 || c2 == 0) && num > 1)
    {
        return true;
    }
    return false;
}

// O(n^2)
bool checkPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Divisors always appear in pairs,
bool checkPrimeUsingPair(int num)
{
    if (num == 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// pair and other conditions check for more efficiency
bool checkPrimeUsingPairEfficient(int num)
{
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= (num); i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 2;
    printf("%d : %d\n", num, checkPrime(num));

    num = 12;
    printf("%d : %d\n", num, checkPrime(num));
    num = 21;
    printf("%d : %d\n", num, checkPrime(num));
    num = 37;
    printf("%d : %d\n", num, checkPrime(num));
    num = 179;
    printf("%d : %d\n", num, checkPrime(num));

    cout << endl;

    num = 2;
    printf("%d : %d\n", num, checkPrimeUsingPairEfficient(num));

    num = 12;
    printf("%d : %d\n", num, checkPrimeUsingPairEfficient(num));
    num = 21;
    printf("%d : %d\n", num, checkPrimeUsingPairEfficient(num));
    num = 37;
    printf("%d : %d\n", num, checkPrimeUsingPairEfficient(num));
    num = 179;
    printf("%d : %d\n", num, checkPrimeUsingPairEfficient(num));

    return 0;
}