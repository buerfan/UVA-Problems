#include<stdio.h>
#include<string.h>
int main()
{
    char m[12];
    while(gets(m))
    {
        if(strcmp(m,"0 0 0")==0 || strcmp(m,"1 1 1")==0)
        {
            printf("*\n");
        }
        else if(strcmp(m,"0 1 0")==0 || strcmp(m,"1 0 1")==0)
        {
            printf("B\n");
        }
        else if(strcmp(m,"0 0 1")==0 || strcmp(m,"1 1 0")==0)
        {
            printf("C\n");
        }
        else
        {
            printf("A\n");
        }
    }
    /*
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if((a==0 && b==0 && c==0) || (a==1 && b==1 && c==1))
        {
            printf("*\n");
        }
        else if((a==0 && b==1 && c==0) || (a==1 && b==0 && c==1))
        {
            printf("B\n");
        }
        else if((a==0 && b==0 && c==1) || (a==1 && b==1 && c==0))
        {
            printf("C\n");
        }
        else
        {
            printf("A\n");
        }
    }
    */
}
