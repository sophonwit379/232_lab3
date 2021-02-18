#include<stdio.h>
int main()
{
    int n,i=2,tmp;
    scanf("%d",&n);
    while(1)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            n/=i;
        }
        else if(n==1)
        {
            printf("%d",n-1);
            break;
        }
        else
        {
            i++;
        }

    }

}
