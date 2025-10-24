#include<iostream>
using namespace std;
int count=0;
void print()
{
    // Base Condition...
    if(count==4)
    {
        return;
    }
    
    
    cout<<count;
    cout<<"\n";
    count++;
    //  Recursive call of that function...
    print();
    
}
int main()
{
    print();
    return 0;
}