#include<stdio.h>
int main()
{
    long long int input,match;
    //freopen("uva_13059.txt","w",stdout);
    while(scanf("%lld",&input)!=EOF)
    {
        //if(input==0) break;
        match=0;
        while(input!=1)
        {
            if(input%2==0)
            {
                match=match+(input/2);
                input=input/2;
            }
            else
            {
                match=match+(input/2);
                input=(input/2)+1;
            }
            //printf("%lld\n",match);
        }
        printf("%lld\n",match);
    }
}
