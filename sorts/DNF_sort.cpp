//it works only when 3 distinct values are given commonly denoted by 0,1 and 2 
// time complexity is o(n) 

#include<iostream>
using namespace std;

void dnf(int a[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
             swap(a[low],a[mid]);
             mid++;
        }

        else 
        {
             swap(a[mid],a[high]);
             high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[]={2,0,1,0,0,2,1,2};
    dnf(arr,8);

}

