#include <bits/stdc++.h>
using namespace std;
int colSum(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        {
            for (int i = 0; i < row; i++)
            {
                sum += arr[i][j];
            }
        }
        cout << "Sum of Column:" << j << " " << sum;
        cout << endl;
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

    colSum(arr, 3, 4);
}

// Enter the ARRAY elements:
// 1 2 3 4 5 6 7 8 9 10 11 12
// The ARRAY is:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sum of Column:0 15
// Sum of Column:1 18
// Sum of Column:2 21
// Sum of Column:3 24