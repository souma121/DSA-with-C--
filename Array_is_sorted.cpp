#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            
        }
        else
        {
            return false;
        }
    }
    return true;
}
// void isSorted(int arr[], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<=arr[i+1])
//         {
            
//         }
//         else
//         {
//             cout<<"Not Sorted";
//             return;
//         }
//     }
//     cout<<"Sorted";
    
// }
int main()
{
    int arr[]={1,2,2,3,3,4};
    int n=6;
    cout<<isSorted(arr,n);
}