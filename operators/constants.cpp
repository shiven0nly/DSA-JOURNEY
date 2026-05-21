// variables that cannot be changed.

#include <iostream>
using namespace std;

int main(){

    const int a = 24;
    int b = 23;
    b = 22;
   //  a = 21; not modifiable value as its starts with constants.
   cout<<a;
   // there is a difference between macros and consts because macros are called symbolic consts as it starts with hash aslo.
   // as const define it is stored in the memory , but what macros does , as code compile the variable is replaced by the macro value (value replace hojayegi) memory ke andr extra jagah nhi lega.
   
   // macros mostly use for datatypes ko likhne ke liye.

    return 0;
}