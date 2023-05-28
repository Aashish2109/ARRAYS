#include <bits/stdc++.h>
using namespace std;
pair<int, int> function1(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return {i, j};
            }
        }
        cout << endl;
    }
    return {-1, -1};
}
int main()
{
    // ARRAY ININTIALIZATION

    int arr[3][4];
    int target;
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "The ARRAY is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Enter the element you want to search:"<<endl;
    cin>>target;
    pair<int, int> ans = function1(arr, 3, 4, target);
    if (ans.first != -1 && ans.second != -1)
    {
        cout << "Element found at " << ans.first << "," << ans.second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}

// If Element not Present

// Enter the ARRAY elements:
// 1 2 3 4 5 6 7 8 9 10 11 12
// The ARRAY is:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Element not found

// If Element Present
//  Enter the ARRAY elements:
//  1 2 3 4 5 6 7 8 9 10 11 12
//  The ARRAY is:
//  1 2 3 4
//  5 6 7 8
//  9 10 11 12
//  Element found at 2,3


// Enter the ARRAY elements:
// 1 3 5 7

// 10 11 16 20

// 23 30 34 60

// The ARRAY is:
// 1 3 5 7
// 10 11 16 20
// 23 30 34 60
// Enter the element you want to search:
// 60


// Element found at 2,3