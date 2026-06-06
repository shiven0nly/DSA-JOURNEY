// THough we have a given array with some elements and, we have to find the elements that is largest among all the elements
// we can do it, by making a variable MAX and temp, and assume max is biggest valued element
// run a for loop and then we see, is max > index(0)th element, then index(1), then index(2).. till index(n-1)th element.

// suppose if index(2) > Max then what we do , we replace the max element with the index(2)th element.

// for replacement we use 'temp' variable

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {123, 22, 212, 445, 6523, 12312, 54423, 454, 22167, 76, 26, 87, 1212, 56, 98, 33, 23};
    int MAX = arr[0]; // for example we are assuming the 0th element is largest, but 0th element is not largest ok

    // now we use for loop
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > MAX)
        {
            int temp = MAX;
            MAX = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Max element in the array = " << MAX << endl;

    return 0;
}