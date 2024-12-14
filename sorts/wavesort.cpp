// it is not a normal sorting algo
// it sort elements like a wave 
// time complexity o(n)


#include<iostream>
using namespace std;

void wavesort(int a[],int n)
{
     for(int i=1;i<n;i+=2)
     {
         if(a[i]>a[i-1])
         {
            swap(a[i-1],a[i]);
         }

         if(a[i]>a[i+1] && i<=n-2)
         {
            swap(a[i],a[i+1]);
         }
     }

     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }
}
int main()
{
    int arr[]={1,7,6,5,2,3,4};

    wavesort(arr,7);

}


// output - 7 1 6 2 5 3 4

//  7   6   5   4
//   \ / \ / \ /
//    1   2   3