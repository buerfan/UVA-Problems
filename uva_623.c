#include<stdio.h>
int res[10000];
int res_size;
int carry;
void multiply(int x)
{
    int i;
    int prod;
    int prod_res;

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
void factorial(int n)
{
    int i;
    res[0]=1;
    res_size=1;
    carry=0;
    for(i=2;i<=n;i++)
    {
        multiply(i);
    }

    for(i=res_size-1;i>=0;i--)
    {

        printf("%d",res[i]);
    }
    printf("%d",res);
    printf("\n");



}

int main()
{
    int input;
    //freopen("uva_623.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        //if(input==0) break;
        printf("%d!\n",input);
        factorial(input);

    }

    return 0;
}
