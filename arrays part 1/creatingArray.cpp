#include <iostream>
using namespace std;

int main()
{

    // if we create an array of 'int marks[50]' like this and only stored the few values in the arr, then other than that indexed elements, where no value store, that's called garbage value

    int arr[50] = {12, 35, 63, 12};
    cout << arr[42] << endl; // now no valid value on 42th position in arr[50] , means it stored the garbage value there

    cout << arr[50] << endl; // element at 50th position not exists, as array from 0 to 49th index only, if we print the 50th position then it will give the warning / garbage value;

    // WHEN WE FORM AN ARRAY THEN, MEMORY IS STATICALLY ALLOCATED (AT COMPILE TIME)

    // TO FIND THE no. of elements of array:-
        // no. = total size of array / size of data type used.

    int n;
    n = sizeof(arr) / sizeof(int);
    cout<<"No. of elements in array: "<< n << endl;

    return 0;
}