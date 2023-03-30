#include<stdio.h>
#include<string.h>
int main()
{
    int input,i,length;
    char str[100];
    //freopen("uva_621.txt","w",stdout);
    scanf("%d",&input);

    for(i=1; i<=input; i++)
    {
        scanf("%s",&str);
        length=strlen(str);
        //printf("%d\n",str[length-1]-48);
        //printf("%d\n",str[length-2]-48);

        //printf("%d\n",strcmp(str[length-1],'5'));
        //printf("%d\n",strcmp(str[length-2],'3'));

        if(strcmp(str,"1")==0 || strcmp(str,"78")==0 || strcmp(str,"4")==0)
        {
            printf("+\n");
        }
        else if(str[length-1]-48==5 && str[length-2]-48==3)
        {
            printf("-\n");
        }
        else if(str[0]-48==9 && str[length-1]-48==4)
        {
            printf("*\n");
        }
        else
            printf("?\n");

    }

}
