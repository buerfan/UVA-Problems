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
    int zero,one,two,three,four,five,six,seven,eight,nine;

    zero=one=two=three=four=five=six=seven=eight=nine=0;

    for(i=res_size-1;i>=0;i--)
    {
        switch(res[i])
        {
            case 0:
            zero++;
            break;

            case 1:
            one++;
            break;

            case 2:
            two++;
            break;

            case 3:
            three++;
            break;

            case 4:
            four++;
            break;

            case 5:
            five++;
            break;

            case 6:
            six++;
            break;

            case 7:
            seven++;
            break;

            case 8:
            eight++;
            break;

            case 9:
            nine++;
            break;
        }
        //printf("%d",res[i]);
    }
    //printf("\n");
    printf("%d! --\n   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",input,zero,one,two,three,four,five,six,seven,eight,nine);



}

int main()
{

    //freopen("uva_324.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0) break;
        factorial(input);

    }

    return 0;
}
