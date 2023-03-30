#include<stdio.h>
#include<math.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    int i;
    float d,v,u;
    float r;
    float sq;
    //freopen("uva_10773.txt","w",stdout);
    float shortTime,shortPath,difference;

    for(i=1;i<=testCase;i++)
    {
        scanf("%f %f %f",&d,&v,&u);

        sq=(u*u)-(v*v);
        r=sqrt(sq);

        shortTime=(d/r);
        shortPath=(d/u);
        difference=shortTime-shortPath;
        if(sq<=0 || difference==0)
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        printf("Case %d: %.3f\n",i,difference);

    }
}
