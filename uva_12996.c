#include<stdio.h>
int main()
{
    int testCase,i,j,sum,count,typeOfMango,maxLimit,typeMan[100],maxTyMan[100];
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        scanf("%d %d",&typeOfMango,&maxLimit);
        for(j=1;j<=typeOfMango;j++)
        {
            scanf("%d",&typeMan[j]);
        }
        for(j=1;j<=typeOfMango;j++)
        {
            scanf("%d",&maxTyMan[j]);
        }
        count=0;
        sum=0;
        for(j=1;j<=typeOfMango;j++)
        {
            if(typeMan[j]<=maxTyMan[j])
            {
                count++;
            }
            sum=sum+typeMan[j];
        }
        //printf("%d %d\n",sum,count);
        if(count==typeOfMango && sum<=maxLimit)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        printf("Case %d: No\n",i);



    }
}
