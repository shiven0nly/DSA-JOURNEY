// Reverse the array
// 1. With Extra Space
// 2. Without using any extra space
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 1. USING EXTRA SPACE
    // -> we make an arr, and start traversing the array from backward.
    // -> using pointers
    // -> original array ko overwrite kr denge

    int copyArr[sizeof(arr) / sizeof(int)];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        int j = sizeof(arr) / sizeof(int) - i - 1;
        copyArr[i] = arr[j];
    }
    cout << "copied array= ";
    for (int i = 0; i < sizeof(copyArr) / sizeof(int); i++)
    {
        cout << copyArr[i] << " ";
    }

    // WITHOUT EXTRA SPACE; More optimized way
    // using the pointer method
    // 2 pointer appraoch

    // 1. First(0th index) and last number(n-1th index) ko swap krenge
    // 2. (1th) and (n-2th) swap krenge
    // 3. (3th) and (n-3th) swap krenge
    // like this we swap the things and swap the elements
    // we make a start pointer with starting 0 and another pointer with last pointer
    // swap(start, end)
    // start++ , end--
    // we use while loop in this , with the condition start < end;

    int n = sizeof(arr) / sizeof(int);
    int *ptr1 = arr;
    int *ptr2 = arr;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
    }
    cout << "\n\nReveresed array without extra space using two pointers method: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}