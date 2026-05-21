// in this problem as name suggests we are going to take the input from the user of two numbers a and b and make their avg , but their is a hidden trap in making average of an odd number with an even number... let's find out

#include <iostream>
using namespace std;

int avg(int a , int b){
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    int avg = (a+b) / 2;
    cout<<"avg of a & b = "<<avg;
}

int floatAvg(float a , float b){
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    float avg = (a+b) / 2;
    cout<<"avg of a & b = "<<avg;
}

int main(){

    int a , b;
    avg(a,b);
    // so after running this code, you will found that the answer is round off the the lowest like 5.5 = 5 , as we are making the variable int , not float, so to get the answer in float parse all the variables in float or parse one variable as float or make the avg function float..
    cout<<"\n\n";
    floatAvg(a,b);

    

    return 0;
}