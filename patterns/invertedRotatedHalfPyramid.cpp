//      *
//     **
//    ***
//   ****
// outer loop: 4 times
// inner loop: spaces ko print krwana hai as cout<<" "; n-i-1 times

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        // spaces print loop
        for (int j = 0; j < 4 - i ; j++)
        {
            cout << " ";
        }
        // stars print loop
        for (int m = 0; m < i + 1; m++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}