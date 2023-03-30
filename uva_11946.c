#include<stdio.h>
#include<string.h>
int main()
{
    int testCase,j,i,t,length;
    char input[1100],ch;
    //freopen("uva_11946.txt","w",stdout);
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        while(gets(input))
        {
            length=strlen(input);
            if(length==0) break;
            for(i=0; input[i]!='\0'; i++)
            {
                ch=input[i];
                if(ch=='0')
                {
                    input[i]='O';
                }
                if(ch=='1')
                {
                    input[i]='I';
                }
                if(ch=='2')
                {
                    input[i]='Z';
                }
                if(ch=='3')
                {
                    input[i]='E';
                }
                if(ch=='4')
                {
                    input[i]='A';
                }
                if(ch=='5')
                {
                    input[i]='S';
                }
                if(ch=='6')
                {
                    input[i]='G';
                }
                if(ch=='7')
                {
                    input[i]='T';
                }
                if(ch=='8')
                {
                    input[i]='B';
                }
                if(ch=='9')
                {
                    input[i]='P';
                }
                printf("%c",input[i]);
            }

            printf("\n");
        }
        if(j!=t)
        {
            printf("\n");
        }
    }
    //printf("%s",input);



}
