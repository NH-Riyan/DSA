#include<bits/stdc++.h>
using namespace std;
const int n=4;

class Queue
{
    int arr[n];
    int F,R;
    public:
    Queue()
    {
        F=-1;
        R=-1;
    }

    void insert(int x)
    {
        if(F>R || R==n-1)
        {
            cout<<"OVERFLOW"<<endl;
            return;
        }
        if(F==-1)
            F=0;

            R++;
            arr[R]=x;
    }

    void Delete()
    {

        if(F==-1 || F>R)
        {
            cout<<"UNDERFLOW\n";
            return;
        }
        F++;

        if(F==-1 || F>R)
            F=-1;
            R=-1;
    }
    void getFront()
    {
        if (F>R || R==n-1) {
            cout << "Front is NULL" << endl;
            return;
        }
        cout<<F+1<<endl;
    }

    void getRear()
    {
        if (F>R || R==n-1) {
            cout << "Rear is NULL" << endl;
            return;
        }
         cout<<R+1<<endl;
    }

        
    void display()
    {
        if (F==-1 || F>R)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = F; i <= R; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
};

int main()
{
    Queue q;
    q.insert(5);
    q.insert(15);
    q.getFront();
    q.getRear();
    q.display();

    q.Delete();
    q.Delete();
    q.getFront();
    q.display();
    q.Delete();

}