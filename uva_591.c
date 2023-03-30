#include<stdio.h>
int main()
{
    int input;
    int i;
    int inputArr[100];
    int sum;
    int Case=1;
    int input_sum;
    int diviser;
    while(scanf("%d",&input)!=EOF)
    {
        input_sum=0;
        if(input==0) break;
        for(i=1;i<=input;i++)
        {
            scanf("%d",&inputArr[i]);
            input_sum=input_sum+inputArr[i];
        }
        diviser=input_sum/input;
        sum=0;
        for(i=1;i<=input;i++)
        {
            inputArr[i]=inputArr[i]-diviser;
            if(inputArr[i]>=0)
            {
                sum=sum+inputArr[i];
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",Case++,sum);
        printf("\n");
    }
}
