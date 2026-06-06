// we can pass the array name as pointer

#include <iostream>
using namespace std;

int max_element_array(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "max element in a array is = " << max << endl;
    return max;
}

int main(){

    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr << endl; // genrally it will print the address of pointer.
    // basically the arr name 'arr' reference to the pointer, and it points to the memory address of arr[0]
    // we can check the value by dereferencing the pointer
    cout << *arr << endl;
    cout << arr[0] << endl;

    // jb bhi hum functions me arrays ko use krte hai, toh hum humesha array ko pass by reference krte hai , pass by value nhi

    // calling the max_element function
    max_element_array(arr, n);

    return 0;
}