//    *  // 3 space + 1 star
//   *** // 2 space + 3 star
//  ***** // 1 space + 5 stars
// ******* // 0 space + 7 stars
// *******
//  *****
//   ***
//    *

// FOR UPPER PYRAMID
// outer loop: rows (1 to n)
// inner loop: each row elements
// a) 1 to n-1 cout<<" "; (space)
// b) 1 to 2*i-1 cout<<"*" (stars)

// FOR DOWN PYRAMID
// just do opposite of upper traingle made the i starts from 4 to i--
// spaces: 1 to n-i // stars 1 to 2*i-1

#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    // UPPER TRIANGLE
    for (int i = 1; i <= n; i++)
    {
        // spaces print loop
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // stars print loop
        for (int m = 0; m < 2 * i - 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // LOWER TRIANGLE
    for (int i = n - 1; i >= 1; i--)
    {
        // spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    


    return 0;
}