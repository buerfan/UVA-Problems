#include<stdio.h>
#include<math.h>
int main()
{
    int s,sum,i,testCase;
    long long int deter,d;
    //freopen("uva_11614.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1; i<=testCase; i++)
    {
        scanf("%lld",&d);
        deter=1+(8*d);
        sum=((sqrt(deter)-1)/2);
        //printf("%d\n",sum);
        printf("%d\n",sum);
    }
    /*
    while(scanf("%d %lld",&s,&d)!=EOF)
    {

        deter=25+(8*s*d);
        sum=(ceil(sqrt(deter)-5)/2)+1;
        //printf("%d\n",sum);
        printf("%d\n",s+sum-1);

        /*
        sum=s;
        for(i=s+1;;i++)
        {
            if(sum>=d)
            {
                printf("%d\n",i-1);
                break;
            }
            sum=sum+i;
            //printf("%d\n",sum);
        }
        */
}
