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

//reverse an array
void f(int i,int arr[],int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);



}
int main()
{
    /*print();*/
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;
    int arr[n];
    //cout<<sum(n);
    //cout<<" \nfactorial of a number is :"<<fact(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}