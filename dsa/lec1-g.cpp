#include<bits/stdc++.h>
using namespace std;
int dosome(int arr[],int n)
{ 
    arr[1]+=10;
    cout<<"Vaue inside funcrtion :"<<arr[1]<<endl;
}
int main()
{
    int n=5;
    int arr[n];
    
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dosome(arr , n);
    cout<<"Value after function call :"<<arr[1]<<endl;
    return 0;
}