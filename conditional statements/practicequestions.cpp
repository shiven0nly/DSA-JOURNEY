// Question1: Write a C++program to get a number from the user and print whether it' s positive,negative or zero.

// Question2:Write a C++ program that takes year rom he ser nd rint hether hat ear s leap ear not..Hint:Aleap year is exactly divisible by 4except for century years(years ending with 100).The century year is a leap year only if it is perfectly divisible by 400.Eg:1999 is not a leap year 2000 is a leap year 2004 is a leap year


#include <iostream>
using namespace std;

void number_nature(int a)
{
    cout << "enter the number: ";
    cin >> a;
    if (a > 0)
    {
        cout << "a is positive\n";
    }
    else if (a == 0)
    {
        cout << "a is zero\n";
    }
    else
        cout << "a is negative\n";
}

void leap_year(int year)
{
    cout << "enter the year: ";
    cin >> year;
    if(year % 400 == 0){
        cout<<year<<" is a leap year\n";
    }
    else if(year % 100 == 0){
        cout<<year<<" is not a leap year\n";
    }
    else if(year % 4 == 0){
        cout<<year<<" is a leap year\n";
    }
    else{
        cout<<year<<" is not a leap year\n";
    }
}

void armstrong_number(int a){
   cout<<"enter a three digit number: ";
   cin>>a;

   int num = a;
   int dig1 = num % 10;
   cout<<dig1<<endl;
   num /= 10;
   int dig2 = num % 10;
   cout<<dig2<<endl;
   num /= 10;
   int dig3 = num;
   cout<<dig3<<endl;
   
   int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
   
   if(cubeSum = a) cout<<"number is armstrong number\n";
   else cout<<"number is not an armstrong number\n";
}

int main()
{

    int a;
    number_nature(a);
    leap_year(a);
    armstrong_number(a);

    return 0;
}
