#include<stdio.h>
long long int res[1000000],res_size,carry;
void multiply(long long int x)
{
    long long int i,prod, prod_res;

    for(i=0;i<res_size;i++)
    {
        prod=(res[i]*x)+carry;
        prod_res=prod%10;
        res[i]=prod_res;
        carry=prod/10;
    }

    while(carry)
    {
        //res_size++;
        res[res_size++]=carry%10;
        carry=carry/10;
    }
}
void factorial(long long int n)
{
    long long int i;
    res[0]=1;
    res_size=1;
    carry=0;
    for(i=2;i<=n;i++)
    {
        multiply(i);
    }

    for(i=res_size-1;i>=0;i--)
    {

        //printf("%d",res[i]);
    }
    printf("%lld\n",res_size);
    //printf("\n");



}

int main()
{
    long long int input,i,fac;
    //freopen("uva_1185.txt","w",stdout);
    scanf("%lld",&input);
    for(i=1;i<=input;i++)
    {
        scanf("%lld",&fac);
        factorial(fac);

    }

    return 0;
}

