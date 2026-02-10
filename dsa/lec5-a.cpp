#include<bits/stdc++.h>
using namespace std;
//recursion
int count1=0;
void print()
{
    
    if (count1==3)
    {
        return;
    }
    cout<<count1<<endl;
    count1++;
    print();

    //cout<<1<<endl;
    //print();//infite loop
}
int main()
{
    print();
}0 