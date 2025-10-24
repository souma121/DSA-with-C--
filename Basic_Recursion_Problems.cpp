#include <iostream>
using namespace std;

/*

    Print name 5 Times

int count=0;
void Name()
{
    if(count==5)
    {
        return;
    }
    cout<<"Soumajit Pal";
    cout<<"\n";
    count++;
    Name();
}


// Nother Way is...

void printName(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"Souma";
    cout<<"\n";
    printName(i+1,n);
}


int main()
{
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    printName(1,n);

    return 0;
}


print linearly from 1 to N

void printNum(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i;
    cout<<"\n";
    printNum(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    printNum(1,n);
    return 0;
}


 Print in opposite N to 1

void printNum(int i)
{
    if (i<1)
    {
        return;
    }
    cout << i;
    cout << "\n";
    printNum(i - 1);
}
int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    printNum(n);
    return 0;
}
*/

// Print N to 1 by using Bactracking

void printNum(int i, int n)
{
    if(i>n)
    {
        return;
    }
    printNum(i+1,n);
    cout<<i<<"\n";
}
int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    printNum(1,n);
}