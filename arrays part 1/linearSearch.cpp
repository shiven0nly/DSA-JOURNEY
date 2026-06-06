// linear search the element in the array, we use for loop for it

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // searchinge the element by using its index;
    int search_index;
    cout << "Enter the index you want to search for(0-9th index): ";
    cin >> search_index;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (search_index == i)
        {
            cout << "The value at given " << search_index << " is = " << arr[i] << endl;
            break;
        }
    }
    // searching the element by using its value;
    int search_element;
    cout << "Enter the value to search its position in the array: ";
    cin >> search_element;
    bool isElement = false;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (search_element == arr[i])
        {
            cout << "The value " << search_element << " is found at the index = " << i << endl;
            isElement = true;
            break;
        }
    }
    if (!isElement)
    {
        cout << "The value " << search_element << ", you entered is not present in the array.";
    }

    return 0;
}