// Primitive
// 1. integer (int) = 4 bytes (integers);
// 2. character (char) = 1 byte (alphabates and symbolys)
// 3. Boolean(bool) = 1 byte (true or false);
// 4. Floating point (float) = 4 byte (decimals);
// 5. Double floating point (double) = 8 byte (double the range of float);

#include <iostream>
using namespace std;

int main(){

    int age = 25;
    int marks = 23;
    float jmarks = 55.5;
    char garade = 'A';
    bool isAdult = true;
    cout<<"size of bool = "<<sizeof(bool)<<"\n";



    return 0;
}