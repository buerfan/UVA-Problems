#include<stdio.h>
#include<math.h>
#define M_PI acos(-1.0)
int main()
{
    int testCase;
    double L;
    int i;
    double width,radius,recArea,cirArea,greenRec;

    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++)
    {
        scanf("%lf",&L);
        width=(L*6.0)/10.0;
        radius=L/5.0;
        recArea=L*width;

        cirArea=M_PI*radius*radius;
        greenRec=recArea-cirArea;
        if(L<0)
        printf("0.00 0.00\n");
        else
        printf("%.2lf %.2lf\n",cirArea,greenRec);
    }
}
