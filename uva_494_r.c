#include<stdio.h>
#include<string.h>
int main()
{
    char input[10000],ch;
    int count,i,length;
    freopen("uva_494.txt","w",stdout);
    while(gets(input))
    {
        count=0;
        length=strlen(input);
        for(i=0;i<length;i++)
        {
            ch=input[i];
            if(((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) && (input[i+1]<'a' || input[i+1]>'z') &&  (input[i+1]<'A' || input[i+1]>'Z'))
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
