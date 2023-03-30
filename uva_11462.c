#include<stdio.h>
#include<algorithm>
using namespace std;
//#define max
long int age[2000005];
int main()
{

    int input,temp,i,j;
    //freopen("uva_11462.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0) break;
        for(i=1;i<=input;i++)
        {
            scanf("%ld",&age[i]);
        }
        sort(age,age+i);
        /*
        for(i=1;i<=input;i++)
        {
            for(j=1;j<=input-i;j++)
            {
                if(age[j]>age[j+1])
                {
                    temp=age[j];
                    age[j]=age[j+1];
                    age[j+1]=temp;
                }

            }
        }
        */
        for(i=1;i<=input-1;i++)
        {
            printf("%ld ",age[i]);
        }
        printf("%ld\n",age[input]);
    }
}
