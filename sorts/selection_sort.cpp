#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[]={77,11,33,66,22,44,99,88,55,};
    int N=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<N-1;i++)
    {
        int min=i;
        for(int j=i+1;j<N;j++)
        {
           if(arr[min]>arr[j])
            min=j;       
        }
        swap(arr[min],arr[i]);
    }

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }

}