#include<stdio.h>
int main()
{
    int testCase,j,a,i,rel[110],k,max;
    char url[110][110];
    char input[100];
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        a=0;
        for(j=0;j<=9;j++)
        {
            //gets(input);
            scanf("%s %d",&url[j][0],&rel[j]);
        }
        max=rel[0];

        for(j=0;j<=9;j++)
        {
            if(rel[j]>=max)
            {
                max=rel[j];
            }
        }
        printf("Case #%d:\n",i);
        for(j=0;j<=9;j++)
        {
            if(rel[j]==max)
            {
                printf("%s\n",url[j]);
            }
        }
        //printf("%d\n",max);

        a=0;
        for(j=0;j<=9;j++)
        {
            //printf("%d\n",rel[j]);
        }

/*
        for(k=0;k<=9;k++)
        {
            for(j=0;j<=9;j++)
            {
                printf("%s ",url[k][j]);
            }
            printf("\n");
        }
*/
    }
}
