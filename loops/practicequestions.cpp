/*Q.1) WAP to find the Factorial of a number entered by the user.

Q.2) WAP to print the multiplication table of a number , entered by the user

Q.3) WAP to input a number and check whether the number is an Armstrong or not

Q.4) For a positive N , WAP that prints all the prime numbers from 2 to N, (Assume N >= 2)

Q.5) For a Positive, WAP that prints the first N fibonacci numbers.
(this is a series where each number is a sum of previous 2 numbers in the series.)
*/

#include <iostream>
using namespace std;

int main()
{

    // Question 1;
    int n;
    cout << "enter a number to find its factorial: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of number " << n << " is: " << fact << "\n\n";

    // Question 2;
    int mul;
    cout << "enter the number to get its multiplication table: ";
    cin >> mul;
    for (int i = 1; i <= 10; i++)
    {
        cout << mul << " x " << i << " = " << mul * i << endl;
    }

    // Question 3;
    int num;
    cout << "\n\nenter number to check its armstrong number or not: ";
    cin >> num;
    int cubeSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /= 10;
    }
    if (num == cubeSum)
        cout << "armstrong number\n\n";
    else
        cout << "not an armstrong number\n\n";

    // question 4
    int prime_num;
    cout << "enter the number: ";
    cin >> prime_num;
    // If you want to include N, change 'i < prime_num' to 'i <= prime_num'
    for (int i = 2; i <= prime_num-1; i++) 
    {
        int curr = i;
        bool isPrime = true;

        // FIXED: j starts at 2 now to avoid division by 0 and 1
        for (int j = 2; j * j <= i; j++) 
        {
            if (curr % j == 0) {
                isPrime = false;
                break; // Optimization: Stop checking if we already know it's not prime
            }
        }

        if(isPrime) cout << curr << " ";
    }

    // Question 5;
    int m;
    cout<<"enter m: ";
    cin>>m;
    int first = 0 , sec = 1;
    cout<< first << " " << sec << " ";

    for(int i = 2; i < m; i++) {
        int third = first + sec;
        cout<< third << " ";
        first = sec;
        sec = third;
    }
    cout<<endl;

    return 0;
}