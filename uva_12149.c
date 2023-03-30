#include<stdio.h>
int CalculateVal(int val)
{
    if(val==1) return 1;
    else return (val*val)+CalculateVal(val-1);
}

int main()
{
    int input;
    int result;
    freopen("uva_12149.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0)
        break;
        result=CalculateVal(input);
        printf("%d\n",result);
    }

}
