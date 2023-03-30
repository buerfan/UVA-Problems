#include<stdio.h>
int main()
{
    int testCase;
    double warriors;
    double result;
    int i;
    //freopen("uva_11614.txt","w",stdout);
    scanf("%d",&testCase);
    double count,row;
    for(i=1;i<=testCase;i++)
    {
        scanf("%lf",&warriors);
        row=1;
        while((row*(row+1))<=(2*warriors))
        {
            row++;

        }
        //printf("%.lf\n",(row-1));

        result=sqrt(warriors);
        row=result;
        result=((result*(result+1))/2.0);
        //printf("%lf\n",(warriors-result));
        row++;
        result=warriors-result;
        //printf("%lf\n",result);
        //printf("%lf\n",row);
        while((result-row)>row)
        {
            result=result-row;
            //printf("%lf\n",(result-row));
            row++;
        }
        printf("%lf\n",row);

    }
}
