#include<stdio.h>
#include<math.h>
int main()
{
    int testCase=1;
    double result,road,integer;

    //freopen("uva_11723.txt","w",stdout);
    while(scanf("%lf %lf",&road,&integer)!=EOF)
    {
        if(road==0 && integer==0) break;
        if(road<=integer)
        {
            printf("Case %d: 0\n",testCase++);
        }
        else if(road>((26*integer)+integer))
        {
            printf("Case %d: impossible\n",testCase++);
        }
        else
        {
            result=((road-integer)/integer);
            printf("Case %d: %.0lf\n",testCase++,ceil(result));
        }

    }
}
