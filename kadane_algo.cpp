//                     kadane's algorithm for finding the maximum subarray sum             

#include<iostream>
using namespace std;

int main()
{
    int arr[7]={3,-4,8,5,-2,9,-6};
    int curr_sum=0,max_sum=INT16_MIN;

    for (int i = 0; i <7 ; i++)
    {
        curr_sum+=arr[i];
        max_sum=max(curr_sum,max_sum);

        if(curr_sum<0)
            curr_sum=0;                    //if sum of 2 consecutive elements is (-)ve then set curr_sum=0 
                                          //and don't add it to the maximum sum
    }
    
    cout<<max_sum;
}

