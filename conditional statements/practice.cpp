// print the largest of 2 numberss
// print if  a number is odd?
// largest of 3 numbers

#include <iostream>
using namespace std;

// largest of 2 numbers
int max_of_2_numbers(int a, int b)
{
    cout << "enter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
        cout << b << " is greater than " << a << endl;
}

// print odd / even
int print_odd_or_even(int a)
{
    cout << "enter the value of a: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " is even";
    }
    else
        cout << a << " is odd";
}

// largest of three numbers
int largest_of_three(int a, int b, int c)
{
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "a is largest";
    }
    else if (b > a && b > c)
    {
        cout << "b is largest";
    }
    else
        cout << "c is largest";
}

int main()
{
    int a, b, c;
    max_of_2_numbers(a, b);
    print_odd_or_even(a);
    largest_of_three(a, b, c);
    return 0;
}