#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 10; i++)
    {
        if ( i % 2 == 0) continue;
        cout << i << endl;
    }

    // WAP that shows that user any number except 10
    
    int n;
    for (int i = 1; i > 0; i++)
    {
        cout<<"Enter the number: ";
        cin>>n;
        if (n % 10 == 0) continue;
        cout<<"you entered: "<<n<<endl;
    }
    
    

    return 0;
}