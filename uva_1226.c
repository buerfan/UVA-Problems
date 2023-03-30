#include<stdio.h>
#include<string.h>

int main()
{
    int testCase;
    long long int m,rem;
    int length,i,k;
    char n[10000];
    scanf("%d",&testCase);
    for(k=1; k<=testCase; k++)
    {
        scanf("%lld",&m);
        scanf("%s",&n);

        length=strlen(n);
        rem=0;
        for(i=0; i<length; i++)
        {
            rem=((rem*10)+n[i]-48)%m;
        }
        printf("%lld\n",rem);
    }
}
