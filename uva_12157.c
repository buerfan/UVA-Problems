#include<stdio.h>
int main()
{
    int testCase,i,plan,k,tlktime;
    int input[30];
    int mile,in,juice;
    freopen("uva_12157.txt","w",stdout);
    scanf("%d",&testCase);
    {
        for(k=1;k<=testCase;k++)
        {
            scanf("%d",&tlktime);
            for(i=1;i<=tlktime;i++)
            {
                scanf("%d",&input[i]);
            }
            mile=0;
            juice=0;
            for(i=1;i<=tlktime;i++)
            {
                in=input[i]%59;

                if(in>=0 && in<=29)
                {
                    mile=mile+10;
                }
                else if(in>=30 && in<=59)
                {
                    mile=mile+20;
                }
                else mile=mile+30;


                if(in>=0 && in<=59)
                {
                    juice=juice+15;
                }
                else if(in>=60 && in<=119)
                {
                    juice=juice+30;
                }
                else juice=juice+45;

            }
            if(mile<juice)
            {
                printf("Case %d: Mile %d\n",k,mile);
            }
            else if(juice<mile)
            {
                printf("Case %d: Juice %d\n",k,juice);
            }
            else
            printf("Case %d: Mile Juice %d\n",k,juice);
        }
    }
}
