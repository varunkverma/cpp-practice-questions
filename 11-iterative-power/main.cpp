#include <iostream>

using namespace std;

long convertNumberToBinary(int n)
{
    int binaryNum = 0;
    long multiplicationFactor = 1;
    while (n > 0)
    {
        int remainder = n % 2;
        binaryNum = remainder * multiplicationFactor + binaryNum;
        n = n / 2;
        multiplicationFactor *= 10;
    }
    return binaryNum;
}

int findPowerOfNumber(int n, int p)
{
    int res = 1;
    int x = n;
    long binaryFromNumber = convertNumberToBinary(p);
    while (binaryFromNumber > 0)
    {
        if (binaryFromNumber % 2 != 0)
        {
            res *= x;
        }
        binaryFromNumber /= 10;
        x *= x;
    }
    return res;
}

int findPowerOfNumberEfficient(int n, int p)
{
    int res = 1;
    while (p > 0)
    {
        if (p % 2 != 0)
        {
            res = res * n;
        }
        n = n * n;
        p /= 2;
    }
    return res;
}

int main()
{
    // cout << convertNumberToBinary(10) << endl;
    int n = 2, p = 3;
    cout << findPowerOfNumber(n, p) << endl;
    n = 5;
    cout << findPowerOfNumber(n, p) << endl;
    cout << findPowerOfNumberEfficient(n, p) << endl;

    return 0;
}