#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Eneer the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute(max size)
    int hash[12]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        cout<<"Enter the NUMBER:"<<endl;
        int num;
        cin>>num;
        //fetch
        cout<<"no of time :"<<endl;
        cout<<hash[num]<<endl;

    }
    return 0;
}