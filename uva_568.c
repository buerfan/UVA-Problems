#include<stdio.h>
int res[100000];
int res_size;
int carry;
int input;
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

    for(i=0;i<=res_size;i++)
    {
        if(res[i]!=0)
        {
            printf("%5d -> %d\n",input,res[i]);
            break;
        }

    }



}

int main()
{

    //freopen("uva_568.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        factorial(input);

    }

    return 0;
}
