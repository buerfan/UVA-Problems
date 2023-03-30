#include<stdio.h>
#include<string.h>
#include<math.h>

int DigitSum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;

}
int main()
{
    int i,sum,min,k,j,val,testCase,res,length,startLimit,lastLimit;
    char input[100];
    //freopen("uva_1583.txt","w",stdout);
    scanf("%d",&testCase);
    for(k=1;k<=testCase;k++)
    {
        res=0;
        scanf("%s",&input);
        length=strlen(input);
        startLimit=pow(10,length-2);
        sum=0;
        for(i=0;i<length;i++)
        {
            res=res*10+(input[i]-48);
            sum=sum+(input[i]-48);
        }

        lastLimit=res;//-sum;
        //printf("%d %d %d %d\n",startLimit,res,sum,lastLimit);

        min=1000000;
        for(j=res-(length*9);j<=lastLimit;j++)
        {
            val=DigitSum(j);
            if((j+val)<=min && (j+val)==res )
            {
                min=j;
            }

        }
        //printf("%d %d\n",startLimit,lastLimit);
        //val=DigitSum(1234);
        //if(min==1000000) printf("0\n");
        //else
        printf("%d\n",min);
    }
}
