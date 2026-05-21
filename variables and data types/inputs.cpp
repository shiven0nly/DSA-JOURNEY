// to take the input in the Cpp we use cin , just like the scanf in the C language

// int age;
//  cout<< "enter age";
//  cin>>age;

// to print the characters we use '<<'
// to prompt the user we use '>>'

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "enter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;
    int add = a + b;
    cout << "\n a+b = " << add;
}

int main()
{

    int age, a, b;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    sum(a, b);
    return 0;
};