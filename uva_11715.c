#include<stdio.h>
#include<math.h>
int main()
{
    int testCase=1,k,inputType;
    double u,v,t,a,s;

    while(scanf("%d",&inputType)!=EOF)
    {
        if(inputType==0) break;
        else if(inputType==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=((u*t)+(0.5*a*t*t));
            printf("Case %d: %.3lf %.3lf\n",testCase++,s,a);
        }
        else if(inputType==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=((u*t)+(0.5*a*t*t));
            printf("Case %d: %.3lf %.3lf\n",testCase++,s,t);

        }
        else if(inputType==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",testCase++,v,t);

        }
        else if(inputType==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",testCase++,u,t);

        }
    }
}
