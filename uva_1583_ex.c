#include<stdio.h>

int DigitSum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    //printf("%d",sum);
    return sum;

}
int main()
{
    int count,n,in,i,sum,min,k,j,val,testCase,res,length,startLimit,lastLimit;
    char input[100];
    int queue[100];
    int head;
    //freopen("uva_1583.txt","w",stdout);
    scanf("%d",&testCase);
    for(k=1;k<=testCase;k++)
    {

        scanf("%d",&in);
        n=in;
        head=0;
        count=0;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
     //   printf("%d\n",count);

        min=1000000;

        for(j=in-(9*count);j<=in;j++)
        {
            //printf("%d",j);
            val=DigitSum(j);
            queue[head++]=val+j;
            //printf("Val: %d\n",val);
            /*
            if((j+val)<=min && (j+val)==in )
            {
                min=j;
            }
*/
        }
        //printf("%d %d\n",startLimit,lastLimit);
        //val=DigitSum(1234);
        for(i=0;i<head;i++)
        {
            if((queue[i])<=min && (queue[i])==in )
            {
                min=queue[i];
            }
        }
        if(min==1000000) printf("0\n");
        else
        printf("%d\n",min);
    }
}
