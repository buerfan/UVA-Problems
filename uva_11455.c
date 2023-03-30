#include<stdio.h>

int main()
{
    int testCase,k,a,b,c,d,flag;
    //freopen("uva_11455.txt","w",stdout);
    scanf("%d",&testCase);
    for(k=1;k<=testCase;k++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        flag=0;
        if((a==b && c==d) && ((a+b+c+d)==(4*a)))
        {
            printf("square\n");
            flag=1;
        }
        else if(((a*b)==(c*d) || (c*b)==(a*d)) && (a+b+c+d)!=(4*a)&& flag==0)
        {
            printf("rectangle\n");
            flag=1;
        }
        else if(((a+b+c)>d && (d+b+c)>a && (a+d+c)>b) && (d+a+b)>c && flag==0)
        {
            printf("quadrangle\n");



        }
        else printf("banana\n");

    }
}
