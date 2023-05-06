#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    reverse(arr, size);
    print(arr, size);
    return 0;
}
// OUTPUT
// Enter the size of ARRAY:
// 5
// Enter the ARRAY elements:
// 9 8 7 6 5
// After reverse:
// 5 6 7 8 9