#include <iostream>

using namespace std;

bool checkIsPrime(int num)
{
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || (num + 2) % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactors(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (checkIsPrime(i))
        {
            int x = i;
            while (num % x == 0)
            {
                cout << i << " ";
                x *= i;
            }
        }
    }
    cout << endl;
}

void printPrimeFactors2(int num)
{
    if (num <= 1)
        return;
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num /= i;
        }
    }
    if (num > 1)
    {
        cout << num;
    }
    cout << endl;
}

void printPrimeFactors3(int num)
{
    if (num <= 1)
        return;
    while (num % 2 == 0)
    {
        cout << 2 << " ";
        num /= 2;
    }
    while (num % 3 == 0)
    {
        cout << 3 << " ";
        num /= 3;
    }

    for (int i = 5; i * i <= num; i += 6)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num /= i;
        }
        while (num % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            num /= (i + 2);
        }
    }
    if (num > 3)
    {
        cout << num;
    }
    cout << endl;
}

int main()
{

    printPrimeFactors(12);
    printPrimeFactors(23);
    printPrimeFactors(84);
    cout << endl;
    printPrimeFactors2(12);
    printPrimeFactors2(23);
    printPrimeFactors2(84);
    cout << endl;
    printPrimeFactors3(12);
    printPrimeFactors3(23);
    printPrimeFactors3(84);
    cout << endl;

    return 0;
}