#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,x,y;
    freopen("uva_10242.txt","w",stdout);
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h)!=EOF)
    {
        if(c==e && d==f)
        {
            x=(((a+g)/2)*2)-c;
            y=(((b+h)/2)*2)-d;
        }
        else if(c==a && d==b)
        {
            x=(((e+g)/2)*2)-c;
            y=(((f+h)/2)*2)-d;
        }
        else if(g==a && h==b)
        {
            x=(((e+c)/2)*2)-a;
            y=(((f+d)/2)*2)-b;
        }
        else if(g==e && h==f)
        {
            x=(((a+c)/2)*2)-e;
            y=(((b+d)/2)*2)-f;
        }
        else if(a==e && b==f)
        {
            x=(((g+c)/2)*2)-e;
            y=(((h+d)/2)*2)-f;
        }
        else if(c==g && d==h)
        {
            x=(((a+e)/2)*2)-c;
            y=(((b+f)/2)*2)-d;
        }


        printf("%.3lf %.3lf\n",x,y);
    }
}
