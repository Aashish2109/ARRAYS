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
            for (int k = j + 1; k < size1; k++)
            {
                if (arr1[i] + arr1[j] + arr1[k] == sum)
                {
                    vector<int> temp;
                    temp.push_back(min(arr1[i], min(arr1[j], arr1[k])));//MIN AND MAX FUNCTION TAKES ONLY TWO ARGUEMENTS
                    temp.push_back(min(arr1[j], arr1[k]));
                    temp.push_back(max(arr1[i], max(arr1[j], arr1[k])));
                    ans.push_back(temp);
                }
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
    cout << endl;
    cout << "Enter the sum:" << endl;
    cin >> sum;
    vector<vector<int>> elements = pairSum(arr1, size1, sum);
    cout << "The elements are:" << endl;
    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i][0] << " " << elements[i][1] << " " << elements[i][2] << endl;
        
    }
    cout << endl;
    return 0;
}
//OUTPUT
// Enter the size of ARRAY 1:5
// Enter the elements of ARRAY 1:1 2 3 4 5

// Enter the sum:
// 9
// The elements are:
// 1 3 5
// 2 3 4