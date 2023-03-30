#include<stdio.h>
#include<math.h>
int main()
{
    char m[40],n[40],result[40];
    int a,b;
    int i;
    int sum;
    //freopen("uva_10469.txt","w",stdout);
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        //if(a==0 && b==0) break;
        sum=0;
        for(i=1;i<=32;i++)
        {
            m[i]=a%2;
            n[i]=b%2;
            a=a/2;
            b=b/2;
        }
        for(i=1;i<=32;i++)
        {
            if((m[i]+n[i])==2)
            {
                result[i]=0;
            }
            else
            {
                result[i]=m[i]+n[i];
            }
        }

        for(i=1;i<=32;i++)
        {
            sum=sum+(result[i]*pow(2,(i-1)));
        }
        printf("%d\n",sum);
    }
}
