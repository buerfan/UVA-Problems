
#include<stdio.h>
#include<string.h>
int main()
{
    char m[10000];
    int test=0;
    int flag;
    int testCase,t,length,i,j,input;
    //freopen("uva_11965.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1; i<=testCase; i++)
    {
        if(test>0) printf("\n");
        test++;
        scanf("%d",&input);
        getchar();
        printf("Case %d:\n",i);
        for(t=1; t<=input; t++)
        {
            gets(m);
            length=strlen(m);
            flag=1;
            for(j=0; m[j]; j++)
            {
                if(m[j]==' ')
                {
                    if(flag==1)
                    {
                        printf(" ");
                        flag=0;
                    }

                }
                else
                {
                    printf("%c",m[j]);
                    flag=1;
                }
            }
            printf("\n");

        }

    }

}

