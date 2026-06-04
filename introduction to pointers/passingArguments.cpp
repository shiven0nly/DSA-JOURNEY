// using pointers , we can pass the arguments in function using two types;

/*
    1. Pass by Value:
     - when parameter is a copy of actual argument variable in memory

    2. Pass by Reference (pass by address):
     - When we pass the reference of arguments to the function

*/
 #include <iostream>
 using namespace std;

void changeA(int a){
    a = 20;
    cout<<a<<endl;
}

void changeB(int &a) // here we pass the address
{
    a = 20;
    cout<<a<<endl;
}

void changeC(int *ptr) // here we are passing the value
 {
    *ptr = 30;
    cout<<*ptr<<endl;
}
 
 int main(){
 
    int a = 10;
    changeA(a); // call by value... means a copy of a is given to the function and after executing the function, the function removed from the memory but 'a' remains the same;

    cout << a << "\n";

    int *ptr = &a;
    changeB(*ptr); // here we pass the value
    cout<<*ptr<<endl;

    changeC(ptr); // jere we pass by reference
    cout<<*ptr<<endl;

 
    return 0;
 }