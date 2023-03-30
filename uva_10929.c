
#include<stdio.h>
#include<string.h>

int main()
{
    int testCase;
    long long int m,rem;
    int length,i,k;
    char n[10000];
    while(scanf("%s",&n)!=EOF)
    {
        length=strlen(n);
        if(n[0]=='0' && length==1) break;

        rem=0;
        for(i=0; i<length; i++)
        {
            rem=((rem*10)+n[i]-48)%11;
        }
        for(i=0; i<length; i++)
            {
                printf("%c",n[i]);
            }
        if(rem==0)
        {
            printf(" is a multiple of 11.\n");
        }
        else printf(" is not a multiple of 11.\n");
        //printf("%lld\n",rem);
    }






}
