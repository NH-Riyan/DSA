#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0) return 1;

    else 
    return n*factorial(n-1);
}

int fibonacci(int n)
{
    if(n<2) return n;

    else return fibonacci(n-1)+fibonacci(n-2);
}
 
void fiboseries(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
        fiboseries(n-1);
    }
}

int main()
 {
  int n=5;
   cout<<factorial(n)<<endl;

   cout<<fibonacci(n)<<endl;

   cout<<"fibonacci series- 0 1 ";
   fiboseries(n-1);

 
 }
