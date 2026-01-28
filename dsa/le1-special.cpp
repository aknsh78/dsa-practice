#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    cout<<"Enter your two numbers :"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    int minimum= min(num1,num2);
    int maximum= max(num1,num2);
    cout<<"Minimum is :"<<minimum<<endl;
    cout<<"Maximum is :"<<maximum<<endl;
    return 0;
}

int maXXx(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    return b;
}
int main()
{
    int num1, num2;
    cin>>num1>>num2;
    int maximum= maXXx(num1,num2);
    cout<<maximum<<endl;
    return 0;
} */
 /*

 //pass by value(pass the copy of variable to function)
 void doSomething(string s)
{
    s[0]='t';
    cout<<s<<endl;
}


int main()
{
    string s="raj";
    doSomething(s);
    cout<<s<<endl;
    return 0;
    

}
    */
//pass by reference(pass the original variable to function)
void doSomething(string &s)
{
    s[0]='t';
    cout<<s<<endl;
}


int main()
{
    string s="raj";
    doSomething(s);
    cout<<s<<endl;
    return 0;
    

}