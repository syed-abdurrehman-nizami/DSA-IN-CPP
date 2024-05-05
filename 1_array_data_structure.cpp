// Methods to declare and initialize array data structure.

#include <iostream>
using namespace std;
int main()
{
    int arr1[4] = {12, 45, 67, 82}; // Method 1

    int arr2[] = {11, 34, 12, 56, 78, 93}; // Method 2

    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr3[n]; // Method 3
    cout << "Enter the values of array :";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr3[i];
    }

    int arr4[4]; // Method 4
    arr4[0] = 101;
    arr4[1] = 103;
    arr4[2] = 106;
    arr4[3] = 109;

    return 0;
}