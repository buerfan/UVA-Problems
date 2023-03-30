#include<stdio.h>
int main()
{
    int testCase,k;
    double l,wi,d,w,size;
    int sum=0;
    scanf("%d",&testCase);
    for(k=1;k<=testCase;k++)
    {
        scanf("%lf %lf %lf %lf",&l,&wi,&d,&w);
        size=l+wi+d;

        if(((l<=56.0 && wi<=45.0 && d<=25.0) || size<=125.0) && w<=7.0)
        {
            printf("1\n");
            sum++;
        }
        else printf("0\n");
    }
    printf("%d\n",sum);
}
