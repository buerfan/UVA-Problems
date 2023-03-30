#include<stdio.h>
#include<string.h>
#define max 999
int table[1000][900];

void init()
{
    int i,j;
    for(i=0;i<1000;i++)
    {
        for(j=0;j<900;j++)
        {
            table[i][j]=0;
        }
    }
}
int LCS(char *x,char *y,int m,int n)
{
    int i,j;

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                table[i][j]=0;
            }
            if(x[i-1]==y[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else if(table[i-1][j]>=table[i][j-1])
            {
                table[i][j]=table[i-1][j];
            }
            else
            {
                table[i][j]=table[i][j-1];
            }
        }
    }

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            //printf("%d ",table[i][j]);
        }
        //printf("\n");
    }
    //printf("%d\n",table[m][n]);
    return table[m][n];
}
int main()
{

    int m,n,lengthLCS;
    char x[1010];
    char y[1010];
    init();
    //freopen("uva_10405.txt","w",stdout);
    while(gets(x))
    {
        gets(y);

        m=strlen(x);
        n=strlen(y);
        lengthLCS=LCS(x,y,m,n);
        //LCS(x,y,m,n);
        //printf("%d %d\n",m,n);
        printf("%d\n",lengthLCS-1);
    }
}
