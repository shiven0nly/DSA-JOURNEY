#include <iostream>
using namespace std;

int prime(int a)
{
    bool isPrime = true;
    if (a == 1)
        isPrime = false;
    else
    {
        for (int i = 2; i * i < a; i++)
        {
            if (a % i == 0)
                isPrime = false;
            else
                isPrime = true;
        }
    }
    if (isPrime)
        cout << "prime\n";
    else
        cout << "not a prime\n";
    return isPrime;
}

int main()
{

    prime(1231247);

    return 0;
}