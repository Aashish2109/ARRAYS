#include <bits/stdc++.h>
using namespace std;
//BINARY SEARCHING
int function1(int arr[][4], int row, int col, int target)
{
    int start = 0;
    int end = row * col - 1;
    int mid = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid / col][mid % col];

        if (element == target)
            return 1;

        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end= mid - 1;
        }
        
    }
    return 0;
    
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
    cout << "Enter the element you want to search:" << endl;
    cin >> target;
    int ans = function1(arr, 4, 4, target);
    if(ans)
    {
        cout<<"Element Found!!!"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    
}

//OUTPUT
// Enter the ARRAY elements:
// 1 2 3 4 5 6 7 8 9 10 11 12



// The ARRAY is:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Enter the element you want to search:
// 12
// Element Found!!!



// Enter the ARRAY elements:
// 1 2 3 4 5 6 7 8 9 10 11 12

// The ARRAY is:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Enter the element you want to search:
// 13
// Element Not Found