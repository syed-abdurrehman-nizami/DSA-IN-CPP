// How to delete value at given index of an array

#include <iostream>
using namespace std;
int main()
{
    int size, i, index;

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

    cout << "Enter the index to delete the value :";
    cin >> index;

    for (i = 0; i < size; i++)
    {
        if (i == index)
        {
            for (int j = i; j < size - 1; j++)
            {
                a[j] = a[j + 1];
            }
            break;
        }
    }
    size--;

    for (i = 0; i < size; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    return 0;
}