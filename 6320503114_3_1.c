#include<stdio.h>
int main()
{
    int i,j,max;
    int com[5][4],tmp[5]={0};
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&com[i][j]);
            tmp[i]+=com[i][j];
        }
    }
    max=tmp[0];
    for(i=1;i<5;i++)
    {
        if(max>tmp[i])
            max=tmp[i];

    }





}
