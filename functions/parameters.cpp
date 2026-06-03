#include <iostream>
using namespace std;

/*
returnType function_name(type para1, type para2...) {
    //definition
    return someValue;
}
*/

int sum(int a, int b)
{
    int add = a + b;
    return add;
}

int main()
{

    cout << sum(12, 4); // here, 12 , 4 are arguments like values
    // parameters: variables
    // arguments: fix values

    return 0;
}