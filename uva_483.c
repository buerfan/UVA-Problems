#include<stdio.h>
#include<string.h>
int main()
{
    int length,w,k,i;
    char input[1000],ch;
    //freopen("uva_483.txt","w",stdout);
    while(gets(input))
    {
        length=strlen(input);
        w=0;
        for(i=0;i<length;i++)
        {
            ch=input[i];
            //if(((ch>='a' && ch<='z' )&& input[i+1]==' ')||(ch>='a' && ch<='z' )&& input[i-1]==' ')
            if(ch==' ' )
            {
                k=i-1;
                while(k>=w)
                {
                    printf("%c",input[k]);
                    k--;
                }
                w=i+1;
                printf("%c",ch);
            }


            /*
            else if(ch=' ')
            {
                printf("%c",ch);
            }
*/
        }

        for(i=length-1;i>=w;i--)
        {
            printf("%c",input[i]);
        }
        printf("\n");
        //
    }
}
