#include<bits/stdc++.h>
using namespace std;

const int maxstk=100;

class Stack
{
    int arr[maxstk];
    int top;

    public:
     Stack()
     {
        top=-1;
     }

     void push(int x)
     {
        if(top==maxstk-1)
        {
            cout<<"OVERFLOW"<<endl;
            return;
        }
        top++;
        arr[top]=x;
     }

     void pop()
     {
        if(top==-1)
        {
            cout<<"UNDERFLOW\n";
            return;        
        }
        top--;
     }

     void Top()
     {
         if(top==-1)
        {
            cout<<"UNDERFLOW\n";
            return;
        }
        cout<<arr[top]<<endl;   
     }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(9);
    s.push(15);
    s.Top();
    s.pop();
    s.Top();

}