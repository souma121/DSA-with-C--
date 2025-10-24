#include<iostream>
using namespace std;

int main()
{
    int arr[6]={2,3,1,4,2,1};
    int largest=arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element is: "<<largest;
}