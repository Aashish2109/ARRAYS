#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
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
    int k;
    cout << "How many positions do you want to rotate ? " << endl;
    cin >> k;
    Rotate(arr, size, k);
    cout << "ARRAY after rotation :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}