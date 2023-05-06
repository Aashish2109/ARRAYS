#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(vector<int> &arr)
{
    int n = arr.size() - 1;       // FOR CALCULATING THE SIZE OF ARRAY
    int *freq = new int[n + 1](); // FOR CREATING A FREQ ARRAY OF SIZE N + 1
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq[arr[i]] > 1)
        {
            ans.push_back(arr[i]);
        }
    }
    if (arr.size() == 0)
        return {-1};
    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of ARRAY :" << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the ARRAY elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> answer = duplicates(arr);
    if (answer.empty() && -1)
    {
        cout << "NO DUPLICATES";
    }
    else
        cout << "DUPLICATES ARE:";
    for (int i = 0; i < answer.size(); i++)
    {

        {
            cout << answer[i] << " ";
        }
    }

    return 0;
}
//Output
// Enter the size of ARRAY :
// 5
// Enter the ARRAY elements:
// 1 1 2 3 4
// DUPLICATES ARE:1 1