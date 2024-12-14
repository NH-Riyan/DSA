#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s1,s2;

    s1.push(1);
    s1.push(3);
    s1.push(5);
    s1.push(8);
    
    if(!s1.empty())
    {
         cout<<"s1 is not empty"<<endl;
         cout<<"Size-"<<s1.size()<<endl;
    }
    s1.pop();
    
    s2.emplace(2);
    s2.emplace(4);
    s2.emplace(6);

    s1.swap(s2);

    cout<<"S1 after swapping ";
    while (!s1.empty())
    { 
        cout<<s1.top()<<" "; 
        s1.pop(); 
    } 

     cout<<endl<<"S1 after swapping ";
     
     while (!s2.empty())
    { 
        cout<<s2.top()<<" "; 
        s2.pop(); 
    } 
}