#include <iostream>
#include <math.h>

using namespace std;

int countDigitLoop(long num)
{
    int c = 0;
    while (num > 0)
    {
        c++;
        num /= 10;
    }
    return c;
}

int countDigitsRecursive(long num)
{
    if (num < 10)
    {
        return num;
    }
    return 1 + countDigitsRecursive(num / 10);
}

int countDigitsLog10(long num)
{
    return 1 + floor(log10(num));
}

int main()
{

    int num = 1234;
    cout << "no of digits in: " << num << " : " << countDigitLoop(num) << endl;
    cout << "no of digits in: " << num << " : " << countDigitsRecursive(num) << endl;
    cout << "no of digits in: " << num << " : " << countDigitsLog10(num) << endl;

    return 0;
}