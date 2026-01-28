#include<bits/stdc++.h>
using namespace std;
/*Void name_of_function() non parameterised
void printName()
{
    cout<<"Hello this isthe trial"<<endl;

}
int main()
{
    printName();
    return 0;
}

//Parameterized function
void printName(string name)
{
    cout<<"Hey !"<<name<<endl;

}
int main()
{
    cout<<"Enter your name:"<<endl;
    string name;
    cin>>name;
    printName(name);

    string name2="Shreya";
    printName(name2);
    return 0;
}
    */
// return type function
int sum(int num1, int num2)
{
    int num3=num1+num2;
    return num3;//11
}
int main()
{
    cout<<"Enter your two numbers :"<<endl;
    int num1, num2;
    cin>>num1>>num2;
    int res=sum(num1,num2);//stops and go to function re=11
    cout<<"Sum is :"<<res<<endl;
    return 0;
}