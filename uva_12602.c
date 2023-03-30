#include<stdio.h>
int main()
{
    int testCase,k,i,alphabet,result,res;
    char m[20];
    scanf("%d",&testCase);
    {
        for(k=1;k<=testCase;k++)
        {
            scanf("%s",&m);
            alphabet=((m[0]-'A')*26*26)+((m[1]-'A')*26)+(m[2]-'A');
            res=0;
            for(i=4;i<8;i++)
            {
                res=(res*10)+(m[i]-48);
            }
            result=alphabet-res;
            if(result<0) result=result*(-1);

            if(result<=100)
            {
                printf("nice\n");
            }
            else
            printf("not nice\n");
            //printf("%d %d",alphabet,res);
        }
    }
}
