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
    int sum=0;
    for(i=res_size-1;i>=0;i--)
    {
        sum=sum+res[i];
        //printf("%d",res[i]);
    }

    //printf("\n");
    printf("%d\n",sum);


}

int main()
{
    int input;
    //freopen("uva_10220.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        //if(input==0) break;
        factorial(input);
    }

    return 0;
}
