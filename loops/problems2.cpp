// WAP where user can keep entering numbers till they enter a multiple of 10;

#include <iostream>
using namespace std;

int main(){

    int n;
    for (int i = 1; i > 0; i++)
    {
        if(n % 10 != 0){
            cout<<"Enter a number: ";
            cin>>n;
        } else break;
    }
    

    return 0;
}