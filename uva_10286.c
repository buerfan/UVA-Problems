#include<stdio.h>
#include<math.h>
//#define M_PI acos(-1.0)
int main()
{
    double side,sq_side,c,val;
    freopen("uva_10286.txt","w",stdout);
    while(scanf("%lf",&side)!=EOF)
    {
        //sq_side=side*side;
        //c = sqrt( 2*(sq_side) + ((2*sq_side)*(.9511)));
        val = M_PI / 180;
        c=(sin(108.0*val))/sin(63.0*val);

        printf("%.10lf\n",c*side);
    }
}
