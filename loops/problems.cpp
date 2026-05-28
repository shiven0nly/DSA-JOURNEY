#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    // print ****
    //       ****
    //       ****
    //       ****

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // print numbers from n to 1;
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    // print the sum of digits of a number using 'while' loop , number , n = 10829
    // sum = 1+0+8+2+9
    // ab humko saare digits chahiye
    // n % 10 = 9 = dig0
    // n / 10 = 1082
    // dig1 = n / 10 , and dig1 % 10 = 2 = dig 1
    // dig 2 = n / 10 , 1082/10 = 108 , dig2 % 10 = 8;
    // dig3 = n / 10 , 108/10 = 10 , dig3 % 10 = 0;
    // dig 4 = n / 10 , 10/10 = 1 , dig 4 = 1 % 10 = 1;
    // dig 5 = 1 / 10 = 0 ; stop
    // sum = dig0 + dig1 + dig2 + dig3 + dig4;
    // while loop se automate kr skte hai kya?

    int lastDig, sum, m;
    cout << "enter m: ";
    cin >> m;
    sum = 0;
    int temp = m;
    while (temp > 0)
    {
        lastDig = temp % 10;
        sum = sum + lastDig;
        temp = temp / 10;
    }
    cout << "sum of m digits: " << sum << endl;

    // print the sum of odd digits of a number using while loop
    // same process but add a if condition that sum only happen when the digit is odd.
    int oddSum = 0;
    int lastdigit;
    temp = m;
    while (temp > 0)
    {
        lastdigit = temp % 10;
        if (lastdigit % 2 != 0)
        {
            oddSum = oddSum + lastdigit;
        }
        temp = temp / 10;
    }
    cout << "sum of odd digits: " << oddSum << endl;

    // reverse the number ,like m = 10829 , then m = 92801

    temp = m;
    int lastdig;
    while (temp > 0)
    {
        lastdig = temp % 10;
        cout << lastdig;
        temp = temp / 10;
    }

    // store the result reverse number than print it;
    temp = m;
    int rev = 0, lastDigit;
    while (temp > 0)
    {
        lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    cout << "reverse of the " << m << " is: " << rev << endl;

    return 0;
}