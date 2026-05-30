// *
// **
// ***
// ****

// outer loop: 4 times outer loop must run
// inner loop: 4 times but must be equal to i, like i = 1 , inner loop bhi 1;
// inner loop: hr row ke andr kya likha hua hai uske according.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}