/*

    Q.) What is the type of a & b;
       " float* a, b; "
    ans: it doesnt means, a and b are pointers , actually, if u assign like this: float*a , b; means pointer is assigned to only variable 'a' , the other variable 'b' is just a float variable

*/

/*

 Q.) Can we initialize a pointer with value 0?
 ans: let's check this
 yes we can
    
*/
#include <iostream>
using namespace std;

int main(){

    int a = 0;
    int *ptr = &a;
    cout<<*ptr<<endl<<ptr<<endl;

    return 0;
}