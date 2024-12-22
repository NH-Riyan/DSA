#include <stdio.h>

int main ()
{
    int n,y,x;
    int rev=0;
    int rem=0;

    scanf("%d",&n);
    printf("num-%d\n",n);
    if(n>9)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
              {
                  printf("this number is not emirp");
                goto exit;
              }
           else
                y=n;
        }

        while(y!=0)
        {

            rem=y%10;
            rev=rev*10+rem;
            y=y/10;
        }

        for(int i=2; i<rev; i++)
        {
            if(rev%i==0)
            {
                printf("this number is not emirp");
                goto exit;
            }
         else
                x=rev;
            }
  printf("rev-%d\n",x);

        if(y==x)
            printf("this number is not emirp");

        else
             printf("this number is emirp");
    }



    else
    {
        printf("wrongg");
    }
exit:
    return 0;
}



