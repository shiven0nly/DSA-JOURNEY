// BINARY
// Add = +
// Sub = -
// Mul = *
// Div = /
// Mod = % (gives remainder of division)

//UNARY
// Inc = ++
// Dec = --

// a++ = a+1
// --a = a 

#include <iostream>
using namespace std;

int main(){

    int a = 2;
    a++;
    cout<<a<<endl;
    ++a;
    cout<<a<<endl;
    a--;
    cout<<a<<endl;
    --a;
    cout<<a<<endl;

    // a++ = use then update
    // ++a = update then use

    return 0;
}