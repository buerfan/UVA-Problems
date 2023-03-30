#include<stdio.h>
int main()
{
    int testCase,count,sum,i,j,n,p,q,weight[100];
    freopen("uva_11900.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&weight[j]);
        }
        count=0;
        sum=0;
        for(j=1;j<=n;j++)
        {
            sum=sum+weight[j];
            if(sum<=q && count<p)
            {

                count++;
            }

        }
        printf("Case %d: %d\n",i,count);
    }
}
