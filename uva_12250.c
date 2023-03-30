#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int result;
    int testCase=1;
    //freopen("uva_12250.txt","w",stdout);
    while(scanf("%s",&str)!=EOF)
    {

        if(strcmp(str,"#")==0)
        break;
        else if(strcmp(str,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",testCase);
        }
        else if(strcmp(str,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",testCase);
        }
        else if(strcmp(str,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",testCase);
        }
        else if(strcmp(str,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",testCase);
        }
        else if(strcmp(str,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",testCase);
        }
        else if(strcmp(str,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",testCase);
        }
        else
        printf("Case %d: UNKNOWN\n",testCase);

        testCase++;
    }

}
