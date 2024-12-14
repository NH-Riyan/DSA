//       there is a element which appears more than [n/2] times in array .....NOW find the element

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,2,1,2};
    int ans=0,freq=0;

    for(int i=0;i<v.size();i++)
    {
        if(freq==0)
            ans=v[i];

        if(ans=v[i])
           freq++;
        
        else freq--;
    }

    cout<<ans;
}