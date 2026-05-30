// 1
// 12
// 123
// 1234
// outerloop: 4 times
// inner loop: prints the j everytime with increase in i everytime

#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}