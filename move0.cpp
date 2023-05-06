#include <bits/stdc++.h>
using namespace std;
void move(int arr[], int n)
{
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[start]);
            start++;
        }
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
    move(arr, size);
    print(arr, size);
    return 0;
}
// OUTPUT
// Enter the size of ARRAY:
// 6 
// Enter the ARRAY elements:
// 1 0 0 1 0 1
// After shifting
// 1 1 1 0 0 0