#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(int arr1[], int size1, int sum)

{
    vector<vector<int>> ans;
    for (int i = 0; i < size1; i++)
    {
        for (int j = i + 1; j < size1; j++)
        {

            if (arr1[i] + arr1[j] == sum)
            {
                vector<int> temp;
                temp.push_back(min(arr1[i], arr1[j]));
                temp.push_back(max(arr1[i], arr1[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
int main()
{
    int size1 = 0;
    int sum = 0;
    cout << "Enter the size of ARRAY 1:";
    cin >> size1;
    int *arr1 = new int[size1];
    cout << "Enter the elements of ARRAY 1:";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout<<endl;
    cout << "Enter the sum:" << endl;
    cin >> sum;
    vector<vector<int>> elements = pairSum(arr1, size1, sum);
    cout<<"The elements are:"<<endl;
    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i][0] << " " << elements[i][1]<<endl;;
    }
    cout<<endl;
    return 0;
}
// OUTPUT
// Enter the size of ARRAY 1:5
// Enter the elements of ARRAY 1:1 2 3 4 5

// Enter the sum:
// 5
// The elements are:
// 1 4
// 2 3