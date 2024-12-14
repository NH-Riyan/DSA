#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixeval(string s)
{
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int opt1 = st.top();
            st.pop();
            int opt2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(opt1 + opt2);
                break;

            case '-':
                st.push(opt1 - opt2);
                break;

            case '/':
                st.push(opt1 / opt2);
                break;

            case '*':
                st.push(opt1 * opt2);
                break;

            case '^':
                st.push(pow(opt1, opt2));
                break;
            }
        }    
    }
    return st.top();
}

int main()
{
    string s = "-+7*45+20";
    cout<<prefixeval(s);
}