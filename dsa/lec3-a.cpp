#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"You can vote"<<endl;

    }
    else{
        cout<<"You are still underage go and study"<<endl;
    }
       
    int marks;
    cin>>marks;
    if(marks<25)
    {
        cout<<"F";
    }
    else if(marks<=44)
    {
        cout<<"E";
    }
    else if(marks<=49)
    {
        cout<<"D";
    }
    else if(marks<=59)
    {
        cout<<"C";
    }
    else if( marks<=79)
    {
        cout<<"B";
    }
    else if( marks<=100)
    {
        cout<<"A";
    }
    else{
        cout<<"Enter your marks correctly";
    }
    return 0;
}