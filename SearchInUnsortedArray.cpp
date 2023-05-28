#include <iostream>
#include <vector>
using namespace std;
int search(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int rowIndex = 0;
    int colIndex = col-1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];
        if (element == target)
            return 1;
        else if (target < element)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }
    return 0;
}
int main()
{
    // ARRAY ININTIALIZATION
    int row,col;
    cout<<"Enter the row size:"<<endl;
    cin>>row;
    cout<<"Enter the col size:"<<endl;
    cin>>col;
    vector<vector<int>>arr(row,vector<int>(col));
    int target;
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        cout << endl;
    }
    cout << "The ARRAY is:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element you want to search:" << endl;
    cin >> target;
    int ans = search(arr, target);
    if (ans)
    {
        cout << "Element Found!!!" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
}
// OUTPUT
// Enter the row size:
// 5 
// Enter the col size:
// 5

// Enter the ARRAY elements:
// 1 4 7 11 15
// 2 5 8 12 19
// 3 6 9 16 22
// 10 13 14 17 24
// 18 21 23 26 30

// The ARRAY is:
// 1 4 7 11 15
// 2 5 8 12 19
// 3 6 9 16 22
// 10 13 14 17 24
// 18 21 23 26 30 

// Enter the element you want to search:
// 31
// Element Not Found