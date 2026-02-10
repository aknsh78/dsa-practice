
//BASIC MATHS
#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
    /*
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<"    ";
        }
    }
    */
    //factors of a number
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            {
                ls.push_back(n/i);
            }

        }
        
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)cout<<it<<" ";
}
//prime check
void prime(int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        cout<<n<<" is a Prime number"<<endl;
    }
    else{
        cout<<"Not a Prime number "<<endl;
    }
}

//gcd
void GCD(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else{
            b=b%a;
        }

    }
    if(a==0)
    {
        //return b
        cout<<"GCD of  number is :"<< b<<endl;
    }
    cout<<"GCD of number is :"<< a<<endl;
    
}
int main()
{
    //reverse
    /*
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count=0;
    while(n>0)
    {
        count+=1;
        n=n/10;

    }
    cout<<"Total number of digit are :-"<<count<<endl;
    */

    //count digit method 2
    /*
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int cnt=(int)(log10(n)+1);
    cout<<"Total number of digit are :-"<<cnt<<endl;
    */

    //reverse
    /*
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        rev=rev*10+lastdigit;  
        n=n/10;
        

    }
    cout<<"Total number of digit are :-"<<rev<<endl;
    */
     
    //reverse
    /*
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        rev=rev*10+lastdigit;  
        n=n/10;
        

    }
    if(dup==rev)
    {
        cout<<dup<<" is Palindrom"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
        */

    //ARMSTRONG number
    /*
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int dup=n;
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;
        sum=sum+lastdigit*lastdigit*lastdigit;
        n=n/10;
        

    }
    if(dup==sum)
    {
        cout<<dup<<" is Armstrong number"<<endl;
    }
    else{
        cout<<"Not a Armstrong  number"<<endl;
    }
    */

    //divisior of a number
   
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    //prime
    printDivisors( n)
    prime(n);
    //GCD or HCF
    int a=11,b=13;
    GCD(a,b);

    

    return 0;
}