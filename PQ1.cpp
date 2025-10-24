#include<iostream>
using namespace std;
//Parameterised Recursion using Backtracking
void parameterisedSum(int n, int sum)
{
    if(n<1)
    {
        cout<<"Sum Is: "<<sum;
        return;
    }
    parameterisedSum(n-1,sum+n);
}

//Functional Recursion using Backtracking

int sum(int i)
{
    if(i==0)
    {
        return 0;
    }
    return i+sum(i-1);
}

// Task is Factorial of a Number...

int fact(int f)
{
    if(f==0 || f==1)
    {
        return 1;
    }
    return f*fact(f-1);
}

int main()
{
    int f;
    cout<<"Enter your number: ";
    cin>>f;
    cout<<fact(f);
}