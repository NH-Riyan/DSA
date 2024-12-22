//   finding the maximum arithmatic subarray(difference between two consecutive elements is same)

#include<iostream>
using namespace std;

int main()
{
    int a[8]={1,3,4,6,8,10,11,14};

    int curr=2,ans=2;
    int diff=a[1]-a[0];

    for(int j=2;j<8;j++)
    {
        if(diff==a[j]-a[j-1])
        {
            curr++;
        }
        else 
          {
            diff=a[j]-a[j-1];
            curr=2;
          }

          ans=max(ans,curr);
          
    }

    cout<<ans;

}