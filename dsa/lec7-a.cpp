#include<bits/stdc++.h>
using namespace std;
///second largest element in array optimal solution 
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
    cout<<"secondlargest is :"<<secondlargest;
}
void second smalest( int arr[], int n)
{
    int smallest=arr[0];
    int secondsmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrray:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    secondlargest(arr,n);
}