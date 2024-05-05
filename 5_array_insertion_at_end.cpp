// How to insert a value at the end of an array.

#include <iostream>
using namespace std;
int main()
{
    int a[10], n, x;

    cout << "Enter the size of an array less than 10 : ";
    cin >> x;

    cout << "Enter the values of array : ";
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < x; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    cout << "Enter number to insert at end : ";
    cin >> n;

    a[x] = n;
    x++; // now the size of array is increased by 1

    for (int i = 0; i < x; i++)
    {
        cout << "Index : " << i << "   Value : " << a[i] << endl;
    }

    return 0;
}