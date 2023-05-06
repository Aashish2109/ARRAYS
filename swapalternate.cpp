#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of ARRAY:" << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swap(arr, size);
    cout << "After swapping:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
//OUTPUT
// Enter the size of ARRAY:
// 5
// Enter the ARRAY elements:
// 1 2 3 4 5
// After swapping:
// 2 1 4 3 5