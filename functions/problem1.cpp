// Q.1) WAF to find the product of 2 numbers
// Q.2) WAF to print if a number is odd or even

#include <iostream>
using namespace std;

int product(int a , int b){
    int mul = a * b ; 
    return mul;
}

void odd_even(int a){
    if(a % 2 == 0) cout<<"even\n";
    else cout<<"odd\n";
}

int main(){
    cout<<product(123,423)<<endl;
    odd_even(123213);

    return 0;
}