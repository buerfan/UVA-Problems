#include<stdio.h>
int main()
{
    int input;
    int result;
    //freopen("uva_11150.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {

        if(input%2==0)
        {
            result=(input/2)*3;
            printf("%d\n",result);
        }
        else
        {
            result=((input/2)*3)+1;
            printf("%d\n",result);
        }
    }
}
