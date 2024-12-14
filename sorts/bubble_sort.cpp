#include <iostream>
using namespace std;
 
int main()
 {
  int a[] = {-2, 45, 0, 11, -9,15,24,1,4,2,99,3};
  int N= sizeof(a)/sizeof(a[0]);

  for (int i=0;i<N-1;i++) 
  {
        for (int j=0;j<N-i-1;j++)
         {
            if (a[j]>a[j+1])
           swap(a[j],a[j+1]);
    }
  }
    
    for (int i=0;i<N;i++) {
    cout<<"  "<<a[i];}

  
}