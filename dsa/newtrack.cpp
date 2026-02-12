#include<bits/stdc++.h>
using namespace std;
int main()
{
    hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a'];
    }
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;

    }

}