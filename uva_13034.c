#include<stdio.h>
int main()
{
    int testCase,i,j,ans[15],flag;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        flag=0;
        for(j=1;j<=13;j++)
        {
            scanf("%d",&ans[j]);
            if(ans[j]==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("Set #%d: Yes\n",i);
        }
        else
        {
            printf("Set #%d: No\n",i);
        }
    }
}
