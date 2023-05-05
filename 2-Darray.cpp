#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ARRAY ININTIALIZATION
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int arr[3][4];

    // FOR ROW WISE INPUT
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // FOR COLUMN WISE INPUT
    // cout << "Enter the ARRAY elements:" << endl;
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }
    cout << "The ARRAY is:" << endl;
    for (int i = 0; i < 3; i++)
    // for (int j = 0; j < 4; j++) IT WILL PRINT SAME AS WE TAKE IN ROW WISE
    {
        for (int j = 0; j < 4; j++)
        // for (int i = 0; i < 3; i++) IT WILL PRINT SAME AS WE TAKE IN ROW WISE
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// ROW WISE INPUT
//  Enter the ARRAY elements:
//  1 2 3 4 5 6 7 8 9 10 11 12
//  The ARRAY is:
//  1 2 3 4
//  5 6 7 8
//  9 10 11 12

// COLUMN WISE INPUT
//  Enter the ARRAY elements:
//  1 2 3 4 5 6 7 8 9 10 11 12
//  The ARRAY is:
//  1 4 7 10
//  2 5 8 11
//  3 6 9 12