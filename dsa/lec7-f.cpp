#include<bits/stdc++.h>
using namespace std;
//LINEAR SEARCH

// FIRST occurrence
int firstOccurrence(int arr[], int n, int num)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
}

// LAST occurrence
int lastOccurrence(int arr[], int n, int num)
{
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
}

// ALL occurrences
void searchAll(int arr[], int n, int num)
{
    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << -1;
}

int main()
{
    int arr[] = {1,2,3,4,3,6,4,5,5};
    int num = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "First Occurrence: " << firstOccurrence(arr,n,num) << endl;
    cout << "Last Occurrence: " << lastOccurrence(arr,n,num) << endl;
    cout << "All Occurrences: ";
    searchAll(arr,n,num);

    return 0;
}
