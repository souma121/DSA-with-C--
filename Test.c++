#include<iostream>
using namespace std;
/*int main()
{
    // int a,b;
    // a=-10,b=20;
    // cout<<a+b;

    // char c='a';
    // cout<<c;

    // float f=2.3;
    // cout<<f;

    // double d=3.2;
    // cout<<d;

    // bool b=true;
    // cout<<b;

    // int m;
    // cin>>m;
    // if(m>33)
    // {
    //     cout<<"Pass";
    // }
    // else{
    //     cout<<"Fail";
    // }

    // for (int i = 1; i <= 100; i+=3)
    // {
    //     cout<<i<<"\n";
    // }

    // int n=12;
    // for(int i=1;i<=10;i++)
    // {
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    // int n=3;
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i*i;
    // }
    // cout<<sum;
    
    // int n=5;
    // int fact=n;
    // for(int i=n-1;i>=1;i--)
    // {
    //     fact*=i;
    // }
    // cout<<fact;

    // int n=8;
    // if(n<2)
    // {
    //     cout<<"Not Prime";
    //     return 0;
    // }
    // else
    // {
    //     for(int i=2;i<=n-1;i++)
    //     {
    //         if(n%i==0)
    //         {
    //             cout<<"No is not prime";
    //             return 0;
    //         }
    //         else
    //         {
    //             cout<<"Prime number";
    //             return 0;
    //         }
    //     }
    // }
    int n;
    cout<< "Enter the n: ";
    cin>>n;
    int a=0,b=1;
    cout<<a<<"\n"<<b;
    for(int i=0;i<n-2;i++)
    {
        int c=a+b;
        cout<<"\n"<<c<<"\n";
        a=b;
        b=c;
    }

}*/

int main()
{
    int arr[]={2,7,11,15};
    int n=3;
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]+arr[j]==9)
        {
            cout<<"Target is: "<<i<<" "<<j;
            
        }
        i++;
    }
}