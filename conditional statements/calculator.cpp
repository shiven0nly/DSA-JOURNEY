#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "\n\n === Calculator === \n\n";
    cout << "enter value of of 1st number: ";
    cin >> a;
    cout << "enter value of 2nd number: ";
    cin >> b;
    int operation;
    cout << "choose operation(+ -> 1,- -> 2 ,* -> 3,/ -> 4,% -> 5): ";
    cin >> operation;
    switch (operation)
    {
    case 1:
        cout << "a+b: " << a + b;
        break;
    case 2:
        cout << "a-b: " << a - b;
        break;
    case 3:
        cout << "a x b: " << a * b;
        break;
    case 4:
        if (b != 0)
            cout << "a / b: " << float(a) / float(b);
        else
            cout << "Division by zero error";
        break;
    case 5:
        if (b != 0)
            cout << "a % b: " << a % b;
        else
            cout << "Modulo by zero error";
        break;
    default:
        cout << "Invalid operation";
    }

    return 0;
}