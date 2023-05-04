#include <bits/stdc++.h>
using namespace std;
int rowSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        {
            for (int j = 0; j < col; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << "Sum of Row:" << i << " " << sum;
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

    rowSum(arr, 3, 4);
}