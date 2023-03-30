#include<stdio.h>
unsigned int graph[1500][1500];
int main()
{
    int row,column,i,j,input,start,no_end,end;
    scanf("%d %d",&row,&column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            graph[i][j]=1;
        }
    }

    scanf("%d",&input);

    for(i=1;i<=input;i++)
    {
        scanf("%d %d",&start,&no_end);
        for(j=1;j<=no_end;j++)
        {
            scanf("%d",&end);
            graph[start][end]=0;
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}
