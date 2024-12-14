#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int b,int m,int e)
{
    int n1=m-b+1;
    int n2=e-m;

    int x[n1];
    int y[n2];

    for(int i=0;i<n1;i++)
    {
        x[i]=arr[b+i];
    }

    for(int i=0;i<n2;i++)
    {
        y[i]=arr[m+i+1];
    }
     
     int i=0,j=0,k=b;

    while(i<n1 && j<n2)
    {
        if(x[i]>y[j])
        {
            arr[k]=y[j];
            j++;
            k++;
        }

        else
        {
            arr[k]=x[i];
            i++;
            k++;
        }
         
    }

    while(i<n1)
    {
         arr[k]=x[i];
            i++;
            k++;
    }

    while(j<n2)
    {
         arr[k]=y[j];
            j++;
            k++;
    }
}


void merge_sort(int arr[],int b,int e)
{
    if(b<e)
    {
        int mid=(b+e)/2;

        merge_sort(arr,b,mid);
        merge_sort(arr,mid+1,e);

        merge(arr,b,mid,e);
    }
}



int main()
{
    int arr[]={77,11,33,66,22,44,99,88,55};
    int N=sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,N-1);

      for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}