#include <bits/stdc++.h>
using namespace std;
int WaveSum(int arr[][4], int rowsize, int colsize)
{
    for (int col = 0; col < colsize; col++)
    {
        if (col & 1)
        {
            for (int row = rowsize - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int row = 0; row < rowsize; row++)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    // ARRAY ININTIALIZATION
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

    cout << "The ARRAY is:" << endl;
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 4; j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The WAVE ARRAY is : ";
    cout << endl;
    WaveSum(arr, 3, 4);
}
// OUTPUT
//  Enter the ARRAY elements:
//  1 2 3 4
//  5 6 7 8
//  9 10 11 12

// The ARRAY is:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// The WAVE ARRAY is :
// 1 5 9
// 10 6 2
// 3 7 11
// 12 8 4