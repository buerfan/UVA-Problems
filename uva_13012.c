#include<stdio.h>
int main()
{
    int teaType,i,count;
    int input[6];
    while(scanf("%d",&teaType)!=EOF)
    {
        count=0;
        for(i=1;i<=5;i++)
        {
            scanf("%d",&input[i]);
        }
        for(i=1;i<=5;i++)
        {
            if(input[i]==teaType)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
