// Ek hi naam ko baar baar use kiya gya hai
// multiple functions with the same name but 'different parameters' either TYPE or NO.OF PARAMETERS;

#include <iostream>
using namespace std;

int sum1(int a, int b)
{
    cout << a + b << endl;
    return a + b;
}
double sum2(double a, double b)
{
    cout << a + b << endl;
    return a + b;
}
// for function overloading we have to give the same name just define different parameters
// and compiler automatically resolves the issue that which function should use for which parameter

int add(int a, int b)
{
    cout << a + b << endl;
    return a + b;
}
int add(double a, double b)
{
    cout << a + b << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << a + b + c << endl;
    return a + b + c;
}
int main()
{

    sum1(2, 3);
    sum1(1.5, 2.5); // sum = 4 but its floating value and return type is int, so it will add 1 + 2 = 3;
    // for correct value:-
    sum2(1.5, 2.5);
    add(2, 3);
    add(2.3, 3.2);
    add(2, 4, 6);

    return 0;
}