#include<stdio.h>
#include<string.h>
void primeNum(int sum)
{
    int i;
    for(i=2;i<sum;i++)
    {
        if(sum%i==0) break;
    }
    if(i==sum) printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");
}
int main()
{
    int length,i,sum;
    char input[1000],ch;
    while(scanf("%s",&input)!=EOF)
    {
        length=strlen(input);
        sum=0;
        for(i=0;i<length;i++)
        {
            ch=input[i];
            if(ch>='a' && ch<='z')
            {
                sum=sum+input[i]-96;
            }
            else
            {
                sum=sum+input[i]-38;
            }
            //printf("%d ",input[i]);
        }
        //printf("%d\n",sum);
        if(sum==1) printf("It is a prime word.\n");
        else
        primeNum(sum);
    }
}
