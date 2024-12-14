#include<bits/stdc++.h>
using namespace std;

void tower(int n,char Beg,char Aux,char End)
{
    if(n==1)
    {
        cout<<Beg<<"->"<<End<<endl;
        return;
    }

    tower(n-1,Beg,End,Aux);

    cout<<Beg<<"->"<<End<<endl;
    
    tower(n-1,Aux,Beg,End);
}

int main()
{
    int n;
    cin>>n;
    tower(n,'A','B','C');
}