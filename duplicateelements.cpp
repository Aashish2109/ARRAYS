#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
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
    cout << "The duplicate element is:" << duplicate(arr, size);
}
// OUTPUT
//  Enter the size of ARRAY:
//  5
//  Enter the ARRAY elements:
//  1 2 3 4 1
//  The duplicate element is:1