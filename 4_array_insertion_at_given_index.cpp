// How to insert a value at the any given index of an array so that the it cannot overwrite the any value.

#include <iostream>
using namespace std;
int main()
{
    int a[10], value, size, index;

    cout << "Enter the size of an array less than 10 : ";
    cin >> size;

    cout << "Enter the values of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    cout << "Enter number to insert in array : ";
    cin >> value;
    cout << "At which index you want to insert this value : ";
    cin >> index;

    for (int i = size; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = value;
    size++; // now the size of array is increased by 1

    for (int i = 0; i < size; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    return 0;
}