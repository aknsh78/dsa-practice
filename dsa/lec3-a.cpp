///vector stl
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
    vector<int>v2(v1);//copying creates a new container
    //Access element in vector
    cout<<v[0]<<" "<<v.at(0);
    //Iterator
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();
    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    //loop in iterator
    //1
    for(vector<int>::iterator it=v.begin();it!=v.end();i++)
    {
        cout<<*(it)<<" ";
    }
    //2
    for(auto it=v.begin();it!=v.end();it++)
    {
         cout<<*(it)<<" ";

    }
    //3 for each loop
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    //delete
    v.erase(v.begin()+1); 
    //multuple delete
    v. erase(v.begin()+2,v.begin()+4);
    //insert
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2/*size*/,10);
    vector<int> copy(2,50);
    v.insert(v.begin();copy.begin();copy.end());
    //size
    cout<<v.size();
    //pops out the last element eg ; {10,20}
    v.pop_back();//{10}
    //swaps the vector
    v1.swap(v2);
    //erase the entire vector
    v.clear();

    cout<<v.empty();//t or f
    // list
    void list()
    {
    list<lst> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(10);//insert at beg
    }

    //dequeue
    void explainDeque()
    {
        deque<int>dq;
        dq.push_back(1);
        dq.push_front(2);
        dq.pop_front();
        dq.pop_back();
        dq.back();
        dq.front();
    }
    //stack
    void explainStack()
    {
         stack<int>st;
         st.push(10);
         st.push(20);
         st.push(30);
         st.push(30);
         st.emplace(50);
         cout<<st.top();
         st.pop();
         cout<<st.size();
         cout<<st.empty();
         stack<int>st1,st2;
         st1.swap(st2);
    }
    //queue
    void eplainQueue()
    {
        queue<int>q;
        q.push(1);
        q.push(2);
        q.emplace(4);
        q.back()+=5;
        cout<<q.back();
        cout<<q.front();
        q.pop();//delete first element in queue
        cout<<q.front();
    }
    void explainPQ()
    {
        priority_queue<int>pq;
        pq.push(5);
        pq.push(2);
        pq.push(28);
        pq.emplace(100);
        cout<<pq.top();
        pq.pop();/*{8,5,2}->{5,2}*/
        cout<<pq.top();

        //MIN hEAP
        priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(5);
        pq.push(2);
        pq.push(8);
        pq.emplace(10);
        cout<<pq.top();
        

    }








}