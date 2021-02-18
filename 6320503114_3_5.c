#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            n/=i;
        }
        else
        {
            i++;
        }

    }




}
