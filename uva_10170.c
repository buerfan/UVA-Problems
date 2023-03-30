#include<stdio.h>
#include<math.h>
int main()
{
    int s,sum,i;
    long long int b,deter,d;
    freopen("uva_10170.txt","w",stdout);
    while(scanf("%d %lld",&s,&d)!=EOF)
    {
        b=(2*s)-1;
        deter=((b*b)+(8*d));
        sum=ceil((sqrt(deter)-((2*s)-1))/2);
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
}
