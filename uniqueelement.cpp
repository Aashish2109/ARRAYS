#include <bits/stdc++.h>
using namespace std;
int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of ARRAY:" << endl;
    cin >> size;
    int arr[100] = {0};
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The unique number is:" << unique(arr, size);
}