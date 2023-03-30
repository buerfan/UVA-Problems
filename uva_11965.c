#include<stdio.h>
#include<string.h>
int main()
{
    char m[10000];
    int test=0;
    int flag;
    int testCase,t,length,i,j,input;
    freopen("uva_11965.txt","w",stdout);
    scanf("%d",&testCase);
    {
        for(i=1; i<=testCase; i++)
        {
            //if(test>0) printf("\n");
            //test++;

            scanf("%d",&input);
            printf("Case %d:\n",i);
            for(t=1; t<=input+1; t++)
            {

                gets(m);
                {
                    length=strlen(m);
                    flag=1;
                    for(j=0;j<length;j++)
                    {
                        if(m[j]==' ')
                        {
                            if(flag==1)
                            {
                                printf(" ");

                            }
                            flag=0;
                        }
                        else
                        {
                            printf("%c",m[j]);
                            flag=1;
                        }
                    }
                    printf("\n");
                    //printf("%d",length);
/*
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
                        if(j==(length-2))
                        {
                            printf("%c\n",m[length-1]);
                        }
                    }
                    */
                    //printf("%c\n",m[length-1]);
                }

            }

        }

    }
}
