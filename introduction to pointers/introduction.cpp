// it points to the memory where variable is stored
// the memory is represented by: "hexadecimal system (0..9,A,B,C,D,E,F)"
// special operator use for pointers:-
// "&" :- address of a variable
// "&" :- Bitwise And
// "&" gives the address of a variable
// hrr ek individual location ka ek address hota hai

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    cout << &a <<"\n";
    

    return 0;
}