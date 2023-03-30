#include<stdio.h>
int main()
{
    int rem,i;
    char m[1000];
    while(scanf("%s",&m)!=EOF)
    {
        if(m[0]=='0' ) break;
            rem=0;
            i=0;
            while(m[i]!='\0')
            {
                rem=((rem*10)+m[i]-48)%17;
                i++;
            }
            if(rem==0) printf("1\n");
            else printf("0\n");
            //printf("%d\n",rem);
    }

}
