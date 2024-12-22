// if the sum of the cube of every degits of a number is equal to the number 
// then the number is called an armstrong number (153= 1^3+5^3+3^3 =153)

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int org=n;

    while(n>0)
    {
       int rem=n%10;   
       sum+=rem*rem*rem;
       n=n/10;
    }
    sum==org?cout<<"armstrong number": cout<<"not an armstrong number";       
}
