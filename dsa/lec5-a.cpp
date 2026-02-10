#include<bits/stdc++.h>
using namespace std;
//recursion
int count1=0;
int sum(int n)
{
    if(n==0) return 0;
    return n+sum(n-1);
}
int fact(int n)
{
    if (n==1) return 1;
    return n*fact(n-1); 

}
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
    /*print();*/
    int n=4;
    cout<<sum(n);
    cout<<" \nfactorial of a number is :"<<fact(n);

}