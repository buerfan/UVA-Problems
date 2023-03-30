#include<stdio.h>
int main()
{
    int testCase;
    int i;
    int x,y,z;
    float totalHour,eachFamWorkHour,extraHour,getMoneyA;
    scanf("%d",&testCase);
    {
        for(i=1;i<=testCase;i++)
        {
            scanf("%d %d %d",&x,&y,&z);

            totalHour=x+y;
            eachFamWorkHour=totalHour/3;
            extraHour=x-eachFamWorkHour;

            if(eachFamWorkHour<=0 || z<=0) printf("0\n");
            else
            {
                getMoneyA=(extraHour*z)/eachFamWorkHour;
                printf("%.0f\n",getMoneyA);
            }

        }
    }
}
