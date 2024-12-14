#include<bits/stdc++.h>
using namespace std;

int part(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    
    for(int j=l;j<h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[h]);
    return i+1;
}


void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int pi=part(a,l,h);

        quicksort(a,l,pi-1);
        quicksort(a,pi+1,h);
    }
}

int main()
{
    int arr[]={77,11,99,33,22,88,66,44,55};
     int N=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,N-1);

    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}