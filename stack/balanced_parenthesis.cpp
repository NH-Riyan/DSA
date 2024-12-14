#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    stack<char>st;
    bool ans=true;

    for(int i=0;i<s.length() ;i++)
    {
        if(s[i]=='(' || s[i]=='{'  || s[i]=='[')
        st.push(s[i]);

        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            st.pop();
             
            else 
             {return false;
              break;}
        }

        
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            st.pop();

            else 
             { return false;
              break;}
        }

        
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            st.pop();

            else 
             { return false;
              break;}
        }
    }

    if(!st.empty()) return false;
    else return ans;
}

int main()
{
    string s ="[{()}]";

    if(check(s)) cout<<"Valid";
    else cout<<"Invalid";
}