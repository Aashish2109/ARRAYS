#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start++], v[end--]);
    }
    return v;
}
vector<int> sum(vector<int> &arr1, int size1, vector<int> &arr2, int size2)
{
    int i = size1 - 1;
    int j = size2 - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int value1 = arr1[i];
        int value2 = arr2[j];
        int sum = value1 + value2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main()
{
    int size1;
    cout << "Enter the size of ARRAY 1:" << endl;
    cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter the ARRAY 1 elements:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    int size2;
    cout << "Enter the size of ARRAY 2:" << endl;
    cin >> size2;
    vector<int> arr2(size2);
    cout << "Enter the ARRAY 2 elements:" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = sum(arr1, size1, arr2, size2);
    cout << "The SUM is:" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
// OUTPUT

// CASE 1:
//  Enter the size of ARRAY 1:
//  5
//  Enter the ARRAY 1 elements:
//  1 2 3 4 5
//  Enter the size of ARRAY 2:
//  5
//  Enter the ARRAY 2 elements:
//  5 4 3 2 1
//  The SUM is:
//  6 6 6 6 6

// CASE 2:
//  Enter the size of ARRAY 1:
//  5
//  Enter the ARRAY 1 elements:
//  Enter the size of ARRAY 2:
//  1
//  Enter the ARRAY 2 elements:
//  5
//  The SUM is:
//  1 2 3 5 0

// CASE 3:
// Enter the size of ARRAY 1:
// 1
// Enter the ARRAY 1 elements:
// 1
// Enter the size of ARRAY 2:
// 5
// Enter the ARRAY 2 elements:
// 5 4 3 2 1
// The SUM is:
// 5 4 3 2 2