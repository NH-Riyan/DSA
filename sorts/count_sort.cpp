#include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n)
{
    int max=*max_element(arr,arr+n);         //maximum value of the array

    int count[max+1]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }

     int res[n];
     for(int i=n-1;i>=0;i--)
     {
        res[--count[arr[i]]]=arr[i];
     }

    for(int i=0;i<n;i++)
     {
        cout<<res[i]<<" ";
     }
}

int main()
{
    int arr[]={1,6,4,1,3,2,3,2,4,3};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    count_sort(arr,n);
}