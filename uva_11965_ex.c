#include<stdio.h>
#include<string.h>
int main()
{
    char m[1000];
    int test=0;
    int testCase,flag,t,length,i,j,input;

    scanf("%d",&testCase);

    for(i=1; i<=testCase; i++)
    {
        scanf("%d",&input);
        //input++;
        //flag=0;
        for(j=1;j<=input;j++)
        {
            gets(m);
            length=strlen(m);

            for(j=0; j<length-1; j++)
            {

                if((m[j]==' ' && (m[j+1])!=' '))
                {
                    printf("%c",m[j]);
                }
                else if(m[j]!=' ')
                {
                    printf("%c",m[j]);
                }
            }
            /*
            if(flag<1) {flag++;}
            else
            printf("\n");*/
            //printf("%c",m[length-1]);
        }
    }
}
