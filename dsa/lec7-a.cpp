#include<bits/stdc++.h>
using namespace std;
///largest,second largest and largest, second smallest element in array optimal solution 
void secondlargest(int arr[],int n)
{
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]<largest && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
    
    cout<<"largest is :"<<largest<<endl;
    cout<<"secondlargest is :"<<secondlargest<<endl;
}
void secondsmallest( int arr[], int n)
{
    int smallest=arr[0];
    int secondsmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]< secondsmallest)
        {
            secondsmallest=arr[i];
        }
    }
    cout<<"smallest element is :"<<smallest<<endl;
    cout<<"secondsmallest element is :"<<secondsmallest<<endl;

}
int main(){
    int n;
    cout<<"Enetr the size of an array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrray:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    secondlargest(arr,n);
    secondsmallest(arr,n);
}