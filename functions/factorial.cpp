// WAP to find the factorial of a number using function

#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact = 1;
    // 4 = 4*3*2*1
    if (a == 0 || a == 1)
        return 1;
    else
    {
        for (int i = a; i >= 1; i--)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int main()
{

    int a;
    int fact = factorial(7);
    cout << fact << endl;

    return 0;
}