// DEFERENCE: Gets the value of the variable pointed by any pointer.
// * operator lets us directly access & modify the value of variable.

#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;

    // *ptr will be equal to 10;
    cout << *ptr << endl; // basically to get the value of the variable at that stored memory

    // a -> value of variable
    // & -> Address of variable
    // ptr -> stores the address of variable at another address
    // *ptr -> go to the address of ptr -> see the value stored at that place -> a -> returns the value of a;

    // we the help of '*ptr' , we can also change the value of the variable

    *ptr = 23;
    cout<<"\n"<<*ptr;


    return 0;
}