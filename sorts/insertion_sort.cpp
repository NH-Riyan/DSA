#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={77,11,33,66,22,44,99,88,55,};
    int N=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<N;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}