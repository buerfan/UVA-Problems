#include<stdio.h>
int main()
{
    int row,column;
    int sum,player;
    int input[110][110];
    int i,j;
    //freopen("uva_12798.txt","w",stdout);
    while(scanf("%d %d",&row,&column)!=EOF)
    {
        //if(row==0 && column==0) break;
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=column;j++)
            {
                scanf("%d",&input[i][j]);
            }
        }
        sum=0;
        player=0;
        for(i=1;i<=row;i++)
        {
            sum=0;
            for(j=1;j<=column;j++)
            {
                //printf("%d ",input[i][j]);
                if(input[i][j]!=0)
                sum++;
            }
            if(sum==column)
            {
                player++;
            }
            //printf("\n");
        }
        //printf("\n");
        printf("%d\n",player);
    }
}
