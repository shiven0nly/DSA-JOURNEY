#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    // for(initialization; condition ; updation){
    //     // code
    // }
    // print N natural no.s
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    cout << "\n\nSum of first n natural numbers:\n";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}