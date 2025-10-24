#include<iostream>
using namespace std;
int arr[]={1,2,4,7,6,5};
int n=6;
int largest=arr[0];
int slargest=-1;

int secondLargest(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
        
        
    }
    return slargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    
    int slargest=secondLargest(arr,n);
    cout<<slargest<<"\n";
    int ssmallest=secondSmallest(arr,n);
    cout<<ssmallest;
}