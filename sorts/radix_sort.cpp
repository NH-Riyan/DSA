#include<bits/stdc++.h>
using namespace std;


int MAX(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}

void countingsort(int a[],int n,int div)
{
    int freq[10]={0};
    int ans[n];

    for(int i=0;i<n;i++)
    {
        freq[(a[i]/div)%10]++;
    }

    for(int i=1;i<10;i++)
    {
        freq[i]+=freq[i-1];
    }

    for(int i=n-1;i>=0;i--)
    {
        ans[--freq[(a[i]/div)%10]]=a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
        a[i]=ans[i];
    }
     cout<<endl;
}

void radix(int a[],int n)
{
    int m=MAX(a,n);
    int pass=1;

    for(int i=1;(m/i)>0;i*=10)
    {
        cout<<"Pass:"<<pass<<endl;
        countingsort(a,n,i);
        pass++;
    }

}



int main ()
{
    int arr[]={348,143,361,423,538,128,321,543,366};
    int N=sizeof(arr)/sizeof(arr[0]);

    radix(arr,N);

    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}