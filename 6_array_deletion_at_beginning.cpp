// How to delete value from the beginning of an array

#include <iostream>
using namespace std;
int main()
{
    int size, i;

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

    cout << "Now we delete the first element of an array." << endl;

    for (i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }

    size--;

    for (i = 0; i < size; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    return 0;
}