#include<stdio.h>
int main()
{
    int n,i=2,tmp;
    scanf("%d",&n);
    while(n>=0)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
        {
            i++;
        }


    }

}
