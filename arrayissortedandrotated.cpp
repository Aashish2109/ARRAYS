#include <bits/stdc++.h>
using namespace std;
bool SR(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i]) // ONLY ONE SUCH PAIR IS POSSIBLE OR LESS THAN ONE
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    return count <= 1;
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
    bool res = SR(arr, size);
    if (res)
    {
        cout << "The ARRAY is SORTED and ROTATED" << endl;
    }
    else
    {
        cout << "BETTER LUCK NEXT TIME!!!" << endl;
    }

    return 0;
}