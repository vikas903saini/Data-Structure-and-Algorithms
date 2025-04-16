#include <iostream>
using namespace std;
int Binary_search(int list[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (list[mid] == key)
            return mid;
        else if (list[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int list[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int key;
    cout << "Enter Element to find in list : ";
    cin >> key;
    int index = Binary_search(list, 8, key);
    if (index == -1)
        cout << "Element is " << key << " not found." << endl;
    else
        cout << "Element is " << key << " at index is " << index << endl;
    return 0;
}