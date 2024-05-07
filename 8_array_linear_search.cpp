// How to search a number in an array using linear search technique

#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, i, find, index;

    cout << "Enter the size of an array : ";
    cin >> size;

    int a[size];

    cout << "Enter the values of array : ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < size; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    cout << "Enter the number you want to search :";
    cin >> find;

    index = linear_search(a, size, find);

    if (index == -1)
    {
        cout << "Your number is not present in an array : ";
    }
    else
    {
        cout << "Your number is present at index : " << index;
    }

    return 0;
}