#include<stdio.h>
#include<math.h>
int main()
{
    int testCase,k;
    double x,y,r,result,small,large;
    scanf("%d",&testCase);
    {
        for(k=1;k<=testCase;k++)
        {
            scanf("%lf %lf %lf",&x,&y,&r);

            result=sqrt((x*x)+(y*y));
            small=r-result;
            large=r+result;
            printf("%.2lf %.2lf\n",small,large);

        }
    }
}
