#include<stdio.h>
int main()
{
    int n,i=2,tmp,show,count=0;
    scanf("%d",&n);
    show=n;
    while(n!=0)
    {
        if(n%i==0)
        {
            n/=i;
            if(tmp==i || count>3)
            {
                printf("%d is not a Lucky Number.",show);
                break;
            }
            if(tmp!=i && count<=3 && n==1)
            {
                printf("%d a Lucky Number.",show);
                break;
            }
            tmp=i;
            count++;
        }
        else
        {
            i++;
        }

    }

}
