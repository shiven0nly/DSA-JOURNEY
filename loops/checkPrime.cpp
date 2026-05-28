#include <iostream>

using namespace std;

int main()
{

    // check if a number is a prime or not;
    int n;
    cout << "enter number to check prime: ";
    cin >> n;
    bool isPrime = true;

    if (n < 2)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "number is prime\n";
    }
    else
    {
        cout << "number is not prime\n";
    }

    return 0;
}