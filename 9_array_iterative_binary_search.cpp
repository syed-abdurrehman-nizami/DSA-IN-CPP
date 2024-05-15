// How to search number in the array using iterative binary search algorithm.

#include <iostream>
using namespace std;
int binary_search(int a[], int find, int start, int end)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (a[mid] == find)
        {
            return mid;
        }
        else if (a[mid] < find)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size], num;

    cout << "Enter the array elements in sorted order : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Enter the number you want to find : ";
    cin >> num;

    int res = binary_search(arr, num, 0, size - 1);

    if (res == -1)
    {
        cout << "Your number is not present in the array.";
    }
    else
    {
        cout << "The number is present at index : " << res;
    }

    return 0;
}