#include<bits/stdc++.h>
using namespace std;
int main()
{/*ARRAY basic
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;
    arr[3]+=6;
    cout<<arr[3]<<endl;
*/
    //2d array
    int arr[3][5];
    arr[2][3]= 89;
    cout<<arr[2][3]<<endl;
    arr[2][3]= 9;
    cout<<arr[2][3]<<endl;
    cout<<arr[1][3]<<endl;
    string s;
    s="Stiver";
    int len=s.size();
    cout<<len<<endl;
    cout<<s[1]<<endl;
    cout<<s[len-1]<<endl;
    s[2]='a';
    cout<<s<<endl;
    /* Wrong
    s[3]="bdc";
    cout<<s<<endl;
    */
//Loops
/*
int i;
for(i=1;i<=10;i=i+5)//if declare i here then scope limited to thisfunction only
{
    cout<<"Time flies"<<i<<endl;
}
cout<<i<<endl;//10_
int j;
for(j=5;j>0;j--)
{
    cout<<"countdown:"<<j<<endl;
}
cout<<j<<endl;
//
 

//While LOOP
int i=1;
while(i<=10)
{
    cout<<"Stiver"<<i<<endl;
    i=i+1;

}
*/

//Do wHILE LOOP
int i=2;
do{
    cout<<"Hello Do while"<<i<<endl;
    i=i+1;

}while(i<=10);
cout<<i<<endl;
return 0;
}


