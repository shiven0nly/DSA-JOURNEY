// Apne array ko break krke krna
// find mid position
// then search if the key is greater then go for right side of mid
// if key is lower then go for left side of mid
// for example key is greater than the mid, then go for the right mid
// after going to right mid.
// again divide the right half, in mid, then again search the key value is greater or lower than the mid
// if key value is greater than the mid the again go for right half of mid of mid
// if lower than go for left half
// and repeating this process untill the key is found at that index
// and eventually after breaking and breaking the key is eventually become 'mid value'

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {17,18,3,74,2,56,112,75,36,23,89,22};
    int n = sizeof(arr) / sizeof(int);
    // its already sorted array
    // if array is not sorted than we have to sort the array using the bubble sort or simple sort
    // using for loop we can perform the bubble sort.
    for (int i = 0; i < n - 1; i++)
    {
        // loop to compare adjacent elements
        // (n-i-1) prevents looking at already sorted elements at the end
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // binary search algorithm
    // arr[mid] == key return mid;
    // arr[mid] < key search in 2nd half (left half); start = mid + 1;
    // arr[mid] > key search in 1st half (right half); start = mid - 1;

    // we run the loop till start <= end
    int start = 0;
    int end = n - 1;
    int key;
    cout << "enter the value to search in the array: ";
    cin >> key;
    bool isMid = false;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "the index is: " << mid;
            isMid = true;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    if (!isMid)
    {
        cout << "The value you entered not present in the array\n\n";
    }
    return 0;
}