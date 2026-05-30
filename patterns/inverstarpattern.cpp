// ****
// ***
// **
// *

// outer loop: 4 times run krna chahiye
// inner loop: 4 times but inverted like j--

#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}