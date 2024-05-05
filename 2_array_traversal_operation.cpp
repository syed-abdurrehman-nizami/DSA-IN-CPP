// How to traverse array data structure. Array traversal means to visit or access the values of array.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of an array : ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the values of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Index : " << i << "   Value : " << arr[i] << endl;
    }

    return 0;
}