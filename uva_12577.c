#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    int result;
    int testCase=1;
    //freopen("uva_12577.txt","w",stdout);
    while(scanf("%s",&str)!=EOF)
    {

        if(strcmp(str,"*")==0)
        break;
        else if(strcmp(str,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",testCase);
        }
        else if(strcmp(str,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",testCase);
        }
        testCase++;
    }

}

