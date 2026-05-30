// A
// BC
// DEF
// GHIJ

// outerLoop: 4 times loop chalega
// inner Loop: increase every character with its ASCII values

#include <iostream>
using namespace std;

int main(){
    char val = 'A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
    

    return 0;
}