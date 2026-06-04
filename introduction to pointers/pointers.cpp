// Pointers: A special variable that stores address of another variable
// int *ptr = &a;
// float *ptr = &b;
// char *ptr = &c;
// int **ptr2 = &ptr {pointer of pointer}
// first we need to declare the type of pointer to store the variable of that variable
#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *ptr;
    // ptr = a; {we cant stor the integer in the pointer , we have to stor the address of the a}
    ptr = &a;
    cout << ptr;

    // pointers take how much size?
    cout << "\n"
         << sizeof(ptr) << endl;

         
         //pointers of pointers
         int **ptr2 = &ptr;
    cout<<ptr2<<endl; // address of ptr2
    cout<<&ptr2; // to print the value of ptr2
    
    delete ptr , ptr2; // {we have to delete the pointer to delete it from the register}
    return 0;
}