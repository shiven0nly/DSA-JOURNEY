// We can print the all elements of the array using for loop / while loop
// or with the help of loops we can also specify the range of elements 'from index' to 'to index' by initializing and closing the for loop accordingly

#include <iostream>
using namespace std;

int main(){

    int arr[] = {12,4312,542,1231,423};
    for(int i = 0 ; i < sizeof(arr)/sizeof(int); i++ ){
        cout<<"at index ["<<i<<"] = "<<arr[i]<<endl;
    }
    cout<<endl;
    int i = 0;
    while(i < sizeof(arr)/sizeof(int)){
        cout<<arr[i]<<endl;
        i++;
    }
    

    return 0;
}