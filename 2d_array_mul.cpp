#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    
   int a[10][10]={0},b[10][10]={0},c[10][10]={0};
   int c1,c2,r1,r2;
   
   cin>>r1>>c1>>r2>>c2;

   if(c1!=r2){
    cout<<"Invalid";
    return 0;
   }
   
   cout<<"1st mat-\n";
   for(int i=0;i<r1;i++)
   {
     for(int j=0;j<c1;j++)
     {
        cin>>a[i][j];
     }
   }

   cout<<"2nd mat-\n";
   for(int i=0;i<r2;i++)
   {
     for(int j=0;j<c2;j++)
     {
        cin>>b[i][j];
     }
   }

   cout<<"result-\n";
   for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c2;j++)
    {
        for(int k=0;k<c1;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
        
    }
   }
    cout<<endl;
    for(int i=0;i<r1;i++)
   {
     for(int j=0;j<c2;j++)
     {
        cout<<c[i][j]<<" ";
     }
     cout<<endl;
   }
}
