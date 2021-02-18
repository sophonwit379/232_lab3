#include<stdio.h>
int main()
{
    int n,i=2,tmp=0,show,count=0;
    scanf("%d",&n);
    show=n;
    while(show!=0)
    {
        if(show%i==0)
        {
            show/=i;
            if(tmp==i && count!=3)
            {
                printf("%d is not a Lucky Number.",n);
                break;
            }
            tmp=i;
            count++;
        }
        else
        {
            i++;
        }
         if(count==3 && show==1)
        {
            printf("%d a Lucky Number.",n);
            break;
        }
    }

}
