#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p1={1,3};
    cout<<p1.first<<"  "<<p1.second<<endl;
    //2nd
    pair<int,pair<int,int>> p2={1,{3,4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    //
    pair<int,int>arr[]={{1,2},{3,4},{4,5}};
    cout<<arr[0].first<<endl;
    cout<<arr[2].second<<endl;
    cout<<arr[1].second<<endl;
    //
    vector<int>v;
    v.push_back(10);
    v.emplace_back(20);
    //
    vector<pair<int,int>>vec;
    v.push_back({1,3})
    v.emplace_back(1,2);
    //
    vector<int>v(5,100);
    vector<int>v(5);
    vector<int>v1(5,20);
    vector<int>v2(v1);//copying creates a new container6



}