#include <iostream>

using namespace std;

int find_powerOfNumber(int n, int p)
{
    if (n < 1)
    {
        return 0;
    }
    int res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    return res;
}

int findPowerOfNumber(int n, int p)
{
    if (p <= 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        int temp = findPowerOfNumber(n, p / 2);
        return temp * temp;
    }
    return n * findPowerOfNumber(n, p - 1);
}
int findPowerOfNumber2(int n, int p)
{
    if (p <= 0)
    {
        return 1;
    }
    int temp = findPowerOfNumber2(n, p / 2);
    temp *= temp;
    if (p % 2 == 0)
    {
        return temp;
    }
    return n * temp;
}

int main()
{
    cout << find_powerOfNumber(2, 3) << endl;
    cout << findPowerOfNumber(5, 3) << endl;
    cout << findPowerOfNumber2(5, 3) << endl;
    return 0;
}