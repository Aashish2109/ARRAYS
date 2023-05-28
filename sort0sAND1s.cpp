#include<iostream>
using namespace std;
void sortfunc(int arr[],int size)
{
    int left=0;
    int right=size-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of ARRAY:"<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"Enter the ARRAY:"<<endl;
    for( int i=0;i<size;i++)
    {
    cin>>arr[i];
    }
    sortfunc(arr,size);
    cout<<"The SORTED ARRAY is:";
    for( int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
    return 0;
}
//OUTPUT
// Enter the size of ARRAY:
// 6
// Enter the ARRAY:
// 0 1 0 1 1 0
// The SORTED ARRAY is:
// 0 0 0 1 1 1