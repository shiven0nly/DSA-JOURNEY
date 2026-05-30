// ***** 1star  +  3 star + 1 star
// *   * 1 star + 3 space + 1 star
// *   * 1 star + 3 space + 1 star
// ***** 1 star + 3 space + 1 star
// outer loop: 4 times run
// inner loop: 5 times but at the run i = 1 , i = 2 ; j = 1 , 2 , 3 becomes " " (space hollow only)

// cout<<"*" first row
// inner loop: for (1 to n- 1) {
//      if  1st or last row -> *
//      else -> " "
//  }

// cout<<"*" last row

#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << "*"; // first row
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "*" << endl; // last row
    }

    return 0;
}