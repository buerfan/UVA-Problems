#include<stdio.h>
int main()
{
    int testCase,i,j,sum,num;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d",&num);
        if(num==6 || num==28 || num==496) printf("perfect\n");
        sum=0;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum<num) printf("deficient\n");

        else if(sum>num) printf("abundant\n");
        //printf("%d",sum);
    }
}
