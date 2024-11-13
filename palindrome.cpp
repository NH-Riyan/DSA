#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,rev;
    cin>>s;

    rev=s;

    reverse(rev.begin(),rev.end());

    if(rev==s)
    cout<<"Palindrome";
    else cout<<"Not Palindrome";


     // type-2
    // int b=0;
    // int e=s.size()-1;
    // while(b<=e)
    // {
    //     if(s[b]==s[e])
    //     {
    //         b++;
    //         e--;
    //     }
    //     else {
    //         cout<<"not palidrome";
    //         return 0;
    //     }
    // }
    // cout<<"palindrome";

}