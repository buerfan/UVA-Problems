#include<stdio.h>
int main()
{
    int testCase,i,j,val,arr[10];
    //freopen("uva_13130.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&arr[j]);
        }
        val=arr[1];
        if((val+1)==arr[2]  && (val+2)==arr[3] && (val+3)==arr[4] && (val+4)==arr[5] )
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}
