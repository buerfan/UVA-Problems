#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char input[100];
    int length;
    int i,sum;
    while(scanf("%s",&input)!=EOF)
    {
        if(strcmp(input,"0")==0) break;
        length=strlen(input);
        sum=0;
        for(i=0;i<length;i++)
        {
            sum=sum+((input[i]-48)*(pow(2,(length-i))-1));
        }
        printf("%d\n",sum);
    }
}
