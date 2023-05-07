#include <bits/stdc++.h>
using namespace std;
pair<int, int> rowSum(int arr[][4], int row, int col)
{
    int maxi = 0;
    int COLINDEX = -1;
    for (int j = 0; j < col; j++)
    {

        int sum = 0;
        {
            for (int i = 0; i < row; i++)
            {
                sum += arr[i][j];
            }
        }
        if (sum > maxi)
        {
            maxi = sum;
            COLINDEX = j;
        }

        cout << endl;
    }
    return {COLINDEX, maxi};
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

    pair<int, int> index = rowSum(arr, 3, 4);
    cout << "The index is " << index.first << " and the sum is " << index.second << endl;
}
// OUTPUT
//  Enter the ARRAY elements:
//  1 2 3 4
//  4 3 2 1
//  1 2 3 4

// The ARRAY is:
// 1 2 3 4
// 4 3 2 1
// 1 2 3 4

// The index is 3 and the sum is 9