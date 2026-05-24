#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age >= 18) {
        cout<<"Allow for driving"<<endl;
    } else if (age < 18) cout<<"Not allow for driving"<<endl;
    
    if(age>= 40){
        cout<<"You can also contest for elections"<<endl;
    }
    else cout<<"you are allow to vote but you cant contest in elections"<<endl;

    return 0;
}