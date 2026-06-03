// TWO TYPES OF SCOPE EXISTS
// 1. LOCAL and 2. GLOBAL

// SCOPE:- is the area where a variable can be accessed or used.. if you call it beyond that , it gives the 'not define' error;
// any variable under { } curly braces , we can't use beyond that

// Where as in the GLOBAL variable, it can be call anywhere in the cpp file, not outside of cpp file

#include <iostream>
using namespace std;
int a = 5;

int increase(int a){
    int inc = ++a;
    return inc;
}

int decrease(int b){
    int dec = --b;
    return dec;
}

int main(){
    int b = 3;
    cout<<increase(a)<<endl; // it take the variable from globally defined a
    cout<<decrease(b)<<endl; // it takes the variable from locally defined b;

    return 0;
}