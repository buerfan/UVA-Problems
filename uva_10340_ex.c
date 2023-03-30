#include<stdio.h>
#include<string.h>
int SubSequence(char x[],char y[],int m,int n)
{
    if(m==0) return 1;
    if(n==0) return 0;

    if(x[m-1]==y[n-1])
    {
        return SubSequence(x,y,m-1,n-1);
    }

    return SubSequence(x,y,m,n-1);
}
int main()
{
    int m,n,i,lengthLCS;
    int subSequence;
    char x[100000];
    char y[100000];

    //freopen("uva_10340.txt","w",stdout);
    while(scanf("%s %s",&x,&y)!=EOF)
    {
        m=strlen(x);
        n=strlen(y);
        subSequence=SubSequence(x,y,m,n);
        if(subSequence) printf("Yes\n");
        else printf("No\n");
    }
}
