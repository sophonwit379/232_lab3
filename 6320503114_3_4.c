#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%i==0)
        {
            if(i==n)
            {
                printf("%d",i);
                break;
            }
            n--;
        }
        else
        {
            i++;
        }
    }




}
