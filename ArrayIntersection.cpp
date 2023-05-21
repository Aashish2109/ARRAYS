#include <iostream>
#include<vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int size1, int size2)
{
    vector<int>ans;
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int>common=intersection(arr1, arr2, size1, size2);
    for(int i=0;i<common.size();i++)
    {
        cout<<common[i]<<" ";
    }
    return 0;
}
//OUTPUT
// 2 2 3 