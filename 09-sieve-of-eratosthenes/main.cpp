#include <iostream>
#include <vector>

using namespace std;

void findAllPrimeBySieveOfEratosthenes(int n)
{
    vector<bool> isPrime(n + 1, true);

    // from i=2 to sqrt(n)
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void findAllPrimeBySieveOfEratosthenes2(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n = 20;
    findAllPrimeBySieveOfEratosthenes(n);
    findAllPrimeBySieveOfEratosthenes2(n);
    return 0;
}