#include <iostream>

using namespace std;

int findLCM(int a, int b)
{
    int i = a, j = b;
    while (a != b)
    {
        if (a > b)
        {
            b += j;
        }
        else
        {
            a += i;
        }
    }
    return a;
}

int findGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return findGCD(b, a % b);
}

int findLCM2(int a, int b)
{
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main()
{
    int a = 4, b = 7;
    cout << "LCM of " << a << " & " << b << " : " << findLCM(a, b) << endl;
    cout << "LCM of " << a << " & " << b << " : " << findLCM2(a, b) << endl;
    return 0;
}