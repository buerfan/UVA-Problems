#include<stdio.h>
#define max 999
//#include<string.h>

int table[900][900];

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

    return table[m][n];
}
int main()
{

    int m,n,i,lengthLCS;
    char x[100000];
    char y[100000];

    //freopen("uva_10340.txt","w",stdout);
    while(scanf("%s %s",&x,&y)!=EOF)
    {
        m=0;
        i=0;
        while(x[i]!='\0')
        {
            m++;
            i++;
        }
        n=0;
        i=0;
        while(y[i]!='\0')
        {
            n++;
            i++;
        }
        //printf("%d %d\n",m,n);
        //m=strlen(x);
        //n=strlen(y);
        lengthLCS=LCS(x,y,m,n);

        //printf("%d\n",lengthLCS-1);
        if((lengthLCS-1)==m) printf("Yes\n");
        else printf("No\n");
    }
}
