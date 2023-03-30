#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000],ch,queue[1000],dequeue[1000];
    int length,i,head,j,tail;
    while(gets(input))
    {
        if(strcmp(input,"DONE")==0) break;
        length=strlen(input);
        head=0;
        for(i=0; i<length; i++)
        {
            ch=input[i];
            if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
            {
                queue[head++]=ch;
            }
        }
        queue[head]='\0';
        //printf("\n");
        //printf("%d\n",head);
        for(j=0; j<head; j++)
        {
            ch=queue[j];
            if(ch>='a' && ch<='z')
            {
                queue[j]=ch-32;
            }
            //printf("%d %c ",queue[j],queue[j]);
        }
        tail=head;
        for(j=0; j<tail; j++)
        {
            dequeue[j]=queue[--head];
            //printf("%c ",queue[j]);
        }
        dequeue[tail]='\0';

        for(j=0; j<tail; j++)
        {
            //printf("%c ",queue[j]);

        }
        //printf("\n");
        for(j=0; j<tail; j++)
        {
            //printf("%c ",dequeue[j]);

        }
        if(strcmp(queue,dequeue)==0)
        {
            printf("You won't be eaten!\n");
        }
        else printf("Uh oh..\n");
        //printf("\n");
    }
    /*
    int len,len_b,len_a,in,i;
    int t1,t2;
    char a[100],b[100],c[100];
    while(gets(c))
    {
        len=strlen(c);
        printf("%d\n",len);
        in=0;
        for(i=0;i<len;i++)
        {
            t1=c[i];
            printf("%d ",t1);
            if(t1>=97 && t1<=122)
            {
                a[i]=c[i]-32;
                printf("%c\n",a[i]);
            }
            else if(t1==32)
            {
                printf("Space");
            }
            else a[i]=c[i];
        }
        a[i]='\0';

        for(i=0;i<len;i++)
        {
            printf("%c ",a[i]);
        }
        printf("\n\n");
        len_a=strlen(a);
        for(i=len_a-1;i>=0;i--)
        {
            b[in]=a[i];
            in++;
        }
        b[in]='\0';
        len_b=strlen(b);
        printf("%d\n",len_b);
        for(i=0;i<len_b;i++)
        {
            printf("%c ",b[i]);
        }
        printf("\n");
        printf("%d\n",strcmp(a,b));
        puts(a);
        puts(b);
        puts(c);
        printf("%d",' ');
    }
    */
}
