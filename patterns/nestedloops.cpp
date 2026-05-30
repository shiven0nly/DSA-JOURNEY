// outer loop: no. of rows.
// inner loop: no. of columns.
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
#include <iostream>
using namespace std;

int main(){
// we call it pattern because it can also be define for nth number
    for (int i =1; i <= 4; i++) // outer loop
    {
        for (int j = 1; j <= 4; j++)// inner loop
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}