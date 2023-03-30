#include<stdio.h>
int main()
{
    long long int testCase,i,n,k,x,fir,sec,thi,res;
    freopen("uva_12751.txt","w",stdout);
    scanf("%lld",&testCase);
    for(i=1;i<=testCase;i++)
    {
        scanf("%lld %lld %lld",&n,&k,&x);

        fir=(n*(n+1))/2;
        sec=(k*(k+1))/2;
        thi=(x-1)*k;
        res=fir-sec-thi;

        printf("Case %lld: %lld\n",i,res);
    }
}
