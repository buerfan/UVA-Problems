#include<stdio.h>
int main()
{
    long long int input;
    //freopen("uva_10499.txt","w",stdout);
    while(scanf("%lld",&input)!=EOF)
    {
        if(input<=0) break;
        if(input==1) printf("0%%\n");
        else printf("%lld%%\n",input*25);

    }
}
