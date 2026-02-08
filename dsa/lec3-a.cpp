///vector stl
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //VECTOR
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

    // LIST
    void list()
    {
    list<lst> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(10);//insert at beg
    }

    //DEQUE
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
    //STACK
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
    //QUEUE
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

    //PRIORITY QUEUE
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
    //SET
    void explainSet()
    {
        set<int>st;
        st.insert(1);
        st.insert(2);
        st.insert(2);//X
        st.insert(4);
        st.emplace(3);
        //function
        auto it=st.find(3);
        auto it=st.find(6);//return st.end()
        
        int cnt=st.count(1);//if exist contain 1 occurence or else 0
         
        //erse differemt method
         st.erase(2);//remove 2 and maintain the sorted order
        
        auto it=st.find(3);
        st.erase(it);

        auto it1=st.find(2);
        auto it2=st.find(4);
        st.erase(it1,it2);
        //
        auto it=st.lower_bound(2);
        auto it=st.upper_bound(3);

    }

    void explainMUltiset()
    {
        multiset<int>ms;
        ms.insert(1);
        ms.insert(1);
        ms.insert(1);//{1,1,1}
        ms.erase(1);//delete all occurence of 1
        int cnt=ms.count(1);
        ms.erase(ms.find(1));//only a single one is erased
        ms.erase(ms.find(1),ms.find(1)+2);

    }
    void explainUset()
    {
        unordered_set<int>st;
    }
    //MAP

    void explainMap()
    {
        map<int,int>mpp;
        mpp[1]=2;
        mpp.emplace({3,4})
        mpp.insert({2,4})
        map<int,pair<int,int>>mpp;
        map<pair<int,int>,int>mpp;
        mpp[{2,3}]=10;
        //traveersal
        for(auto it:map)
        {
            cout<<it.first<<" "<<it.second<,endl;
        }
        cout<<mpp[1];
        cout<<mpp[6];//if does not exists give null or 0
        aauto it=mpp.find(3);
        cout<<*(it).second;//value
        auto it=mpp.find(5);//if does not exist points to end of the map
        //
        auto it=mpp.lower_bound(2);
        auto it=mpp.upper_bound(3);
        //erase,swap,size,empty are same



    }
    void explainMultimap()
    {

    }
    void explainUnorderedMap()
    {

    }

    //
    bool comp(pair<int,int>p1,pair<int,int>p2)
    {
         if(p1.second < p2.second) return true;
         if(p1.second > p2.second) return false;//swap
         //they are same 
         if(p1.first > p2.first) return true;
         return false;//swap
           
    }

    //***IMPRTANT***
    void explainExtra()
    {
        sort(a,a+n);
        sort(v.begin(),v.end());
        sort(a+2,a+4);
        sort(a,a+n,greater<int>);//descending order automatically
        pair<int,int>a[]={{1,2},{3,4},{5,6}};
        //myway
        sort(a,a+n,comp);

        //count 1 in binary representation of the number
        int num=7;
        int cnt=_builtin_popcount(num);
        long long num=14852584568232265;
        int cnt=_builtin_popcountll(num);
        
        //permuation 
        string s="123";
        sort(s.begin(),s.end());
        do{
            cout<<s<<endl;
        }while(next_permutation(s.begin(),s.end()));

        int maxi= *max_element(a,a+n);
         

    }
     









}