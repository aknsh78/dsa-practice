#include<bits/stdc++.h>
using namespace std;
int main()
{/*
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"You can vote"<<endl;

    }
    else{
        cout<<"You are still underage go and study"<<endl;
    }
       */
       /*
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
        */
    // Nested if else statement:---
    /*
    int age;
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for job";
    }
    else{
       
        if(age<=57)
        {
            cout<<"eligible for job";
            if(age<=54)
            {
                cout<<" ,But retiment soon"<<endl;
            }
            
        }
        else{
            cout<<"Retirement bro!"<<endl;
        }
    }
        */
    //SWITCH--->
    int day;
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case7:
        cout<<"Sunday";
        break;
        cout<<"Just checking in"<<endl;
        default:
        cout<<"Invalid"<<endl;
        cout<<"It will print this line also if there is no break"<<endl;


    }
    cout<<"Check";

    

}