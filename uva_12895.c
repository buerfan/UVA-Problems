#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char input[100];
    int sum,i;
    int res,length;
    int k,testCase;
    //freopen("uva_12895.txt","w",stdout);
    scanf("%d",&testCase);
    for(k=1; k<=testCase; k++)
    {
        scanf("%s",&input);
        res=0;
        sum=0;
        length=strlen(input);

        for(i=0; i<length; i++)
        {
            res=(res*10+(input[i]-48));
        }
        for(i=0; i<length; i++)
        {
            sum=sum+pow((input[i]-48),length);
        }
        //printf("%d\n",sum);
        if(sum==res)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }

    }
}
