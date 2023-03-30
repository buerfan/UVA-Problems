#include<stdio.h>
#include<string.h>
int main()

{
    char ch,input[100000];
    int i,length,queue[100000],word,head,count;
    //freopen("uva_494.txt","w",stdout);
    while(gets(input))
    {
        head=0;
        count=0;
        length=strlen(input);
        //printf("%d\n",length);
        for(i=0; i<length; i++)
        {
            ch=input[i];
            if(ch>='a' && ch<='z')
            {
                queue[head++]=ch;
            }
            else if(ch>='A' && ch<='Z')
            {
                queue[head++]=ch;
            }

            else if(ch==' ')
            {
                queue[head++]=ch;
            }
        }
        queue[head]='\0';
        //printf("%d\n",head);
        for(i=0; i<head; i++)
        {
            ch=queue[i];
         //   printf("%d ",queue[i]);
            if(ch==' ')
            {
                count++;
            }
        }
        //printf("\n");

        for(i=0; i<head-1; i++)
        {
            if(queue[i]==32 && queue[i+1]==32)
            {
                queue[i]=0;
            }
        }
        if(queue[head-1]==32 || queue[0]==32)
        {
            queue[head-1]=0;
            queue[0]=0;
        }
        for(i=0; i<head; i++)
        {
            ch=queue[i];
           // printf("%d ",queue[i]);
        }
        word=0;
        for(i=0; i<head; i++)
        {
            if(queue[i]==32)
            {
                word++;
            }
        }
        printf("%d\n",word+1);
    }
}
