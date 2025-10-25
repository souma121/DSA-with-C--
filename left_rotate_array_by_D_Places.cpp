// Brute Force Technique
#include<iostream>
using namespace std;

void rotateArrayD(int arr[], int n, int d)
{
    d=d%n;

    //Put all the value of D in Temp array

    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    cout<<"Temp array"<<"\n";
    for(int i=0;i<d;i++)
    {
        cout<<temp[i]<<"\t"<<"\n";
    }


    for(int j=d;j<n;j++)
    {
        arr[j-d]=arr[j];
    }
    //Put back temp marray to the main array...

    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
    
}
int main()
{
    int n=4;
    int arr[n];
    cout<<"Enter the array element.."<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotateArrayD(arr,n,3);
    cout<<"Rotated array was.."<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}