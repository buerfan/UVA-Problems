#include<stdio.h>
long long int CalculateFab(int input);
int main()
{
    long long int fab;
    //long long int fab[1000];
    int input,i;
    //freopen("uva_12459.txt","w",stdout);
    while(scanf("%d",&input)!=0)
    {
        if(input==0) break;

        fab=CalculateFab(input);
        /*
        fab[-1]=0;
        fab[0]=1;
        for(i=1; i<=input; i++)
        {
            fab[i]=fab[i-1]+fab[i-2];
        }
        */
        printf("%lld\n",fab);
        //return 1;
    }
}

long long int CalculateFab(int input)
{
    long long int fab[1000];
    int i;

    fab[-1]=0;
    fab[0]=1;
    for(i=1; i<=input; i++)
    {
        fab[i]=fab[i-1]+fab[i-2];

    }
    return fab[input];
}
