// NULL POINTER: is used to explicitly indicate that a pointer does not point to any valid memory address.

#include <iostream>
using namespace std;

int main(){

    int a = 12;
    int *ptr = NULL;
    cout<<ptr<<endl; // it points to 0
    cout<<*ptr<<endl; // it gives error: segmentation fault as there is no value present at the memory address ptr.
    delete ptr;
    return 0;
}