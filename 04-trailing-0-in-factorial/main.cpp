#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num < 0)
    {
        return -1;
    }
    else if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int countTrailingZeroes(int num)
{
    if (num % 10 != 0)
    {
        return 0;
    }
    return 1 + countTrailingZeroes(num / 10);
}

int countTrailingZeroesFromFactorial(int num)
{
    int fact = factorial(num);
    return countTrailingZeroes(fact);
}

int countingTrailingZeroesEffiecientlyFromFactorial(int num)
{
    int res = 0;
    for (int i = 5; i <= num; i *= 5)
    {
        res += num / i;
    }
    return res;
}

int main()
{
    int num = 10;
    cout << countTrailingZeroesFromFactorial(num) << endl;

    // num = 10000;
    cout << countingTrailingZeroesEffiecientlyFromFactorial(num) << endl;
    return 0;
}
