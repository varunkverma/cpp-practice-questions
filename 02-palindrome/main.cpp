#include <iostream>

using namespace std;

long reverseNumber(long num)
{
    long n = 0;
    while (num > 0)
    {
        n = (n * 10) + (num % 10);
        num /= 10;
    }
    return n;
}

bool checkPalindrome(long num)
{
    return num == reverseNumber(num);
}

int main()
{
    long num1 = 1001;
    long num2 = 1002;
    cout << boolalpha;
    cout << num1 << ", is palindrome : " << checkPalindrome(num1) << endl;
    cout << num2 << ", is palindrome : " << checkPalindrome(num2) << endl;
    return 0;
}