// converting one data type into another type 

// int into float
// float to int
// char to int
// int to char

// implicit and explicit;
// implicit => automatic conversion
// explicit => manual conversion by us

#include <iostream>
using namespace std;

int main(){

    cout<<(10/3)<<endl; // int / int = int
    cout<<(10/3.0)<<endl; // int / float = float = float
    cout<<(10.0/3)<<endl; // float / int = float
    cout<<(10.0/3.0)<<endl; // float / float = float
    // it happens because when compiler compiles the code , it takes things like :- float has big data type (8 byte storage) and int is small in comparison to float

    // so to avoid any type of data loss , compiler choose the overall datatype to be float.

    // bool -> char -> int -> float -> double

    // EXPLICIT TYPECASTING
    int a = 5;
    int b = 2;
    float div = (float)a / b; 
    // we write '(float)a' not 'float(a)'
    cout<<div;
    
    return 0;
}