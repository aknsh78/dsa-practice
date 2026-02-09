#include<bits/stdc++.h>
using namespace std;
//pattern1
void print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cout<<"* ";
        }
        cout<<endl;
    }

}

//pattern 2
void print2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
             cout<<"* ";
        }
        cout<<endl;
    }

}

//pattern 3
void print3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
             cout<<j<<" ";
        }
        cout<<endl;
    }

}

//pattern 4
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
             cout<<i<<" ";
        }
        cout<<endl;
    }

}

//pattern5
void print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<(n-i+1);j++)
        {
             cout<<"* ";
        }
        cout<<endl;
    }

}

//pattern 6
void print6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
             cout<<j<<" ";
        }
        cout<<endl;
    }

}

//pattern7
void print7(int n)
{
    for(int i=1;i<=n;i++)
    {
        //space
        for(int j=1;j<=n-i;j++)
        {
             cout<<" ";
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
             cout<<"*";
        }
        //space
        for(int j=1;j<=n-i;j++)
        {
             cout<<" ";
        }
        cout<<endl;
    }

}

//pattern8
void print8(int n)
{
    for(int i=1;i<=n;i++)
    {
        //space
        for(int j=1;j<=i-1;j++)
        {
             cout<<" ";
        }
        //star
        for(int j=1;j<=2*(n-i)+1;j++)
        {
             cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++)
        {
             cout<<" ";
        }
        cout<<endl;
    }

}

//pattern9
void print9(int n)
{
    print7(n);
    print8(n);

}

//pattern10
void print10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) 
        {
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


//pattern 11
void print11(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++)
        {
             cout<<start;
             start=1-start;//flip 1 to 0 and o to1
        }
        cout<<endl;
    }

}

//pattern 12
void print12(int n)
{
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        //numbers
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        space-=2;//decreases every time the outer loop runs for the row
    }
    
}

//pattern 13
void print13(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }

}

//pattern 14
void print14(int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }

}

//pattern 15
void print15(int n)
{
    /*
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }

}*/    
    for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<='A'+(n-i);ch++)
        {
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }

}


//pattern 16
void print16(int n)
{
    
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;

        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }

}


//pattern 17
void print17 (int n)
{
    
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
             cout<<" ";
        }
        //alphabet
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;

        }

        
        //space
        for(int j=0;j<n-i-1;j++)
        {
             cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    
    //LOOPS
    //1
    int t;
    cout<<"Enter the number of test cases:-"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        /*print1(n);*/
        /*print2(n);*/ 
        /*print3(n);*/
        /*print4(n);*/
        /*print5(n);*/
        /*print6(n);*/
        /*print7(n);*/
        /*print8(n);*/
        /*print9(n);*/
        /*print10(n);*/
        /*print11(n);*/
        /*print12(n);*/
        /*print13(n);*/
        /*print14(n);*/
        /*print15(n);*/
        /*print16(n);*/
        print17(n);
        
    }
    
    //2
    
    



    return 0;
}
