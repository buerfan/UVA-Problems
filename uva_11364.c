#include<stdio.h>
int main()
{
    int testCase,input,max,shop[100],i,k,min,sum,res,j;
    scanf("%d",&testCase);
    for(k=1; k<=testCase; k++)
    {
        scanf("%d",&input);
        for(i=1;i<=input;i++)
        {
            scanf("%d",&shop[i]);
        }
        min=shop[1];
        for(i=2;i<=input;i++)
        {
            if(shop[i]<=min)
            min=shop[i];
        }

        max=shop[1];
        for(i=2;i<=input;i++)
        {
            if(shop[i]>=max)
            max=shop[i];
        }
        printf("%d\n",2*(max-min));
    }

}
