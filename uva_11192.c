#include<stdio.h>
int main()
{
    int m,count,i,k,l,t;
    char arr[110];
    int mul;
    freopen("uva_11192.txt","w",stdout);
    while(scanf("%d",&m)!=EOF)
    {
        if(m==0) break;
        scanf("%s",&arr);
        i=0;
        count=0;
        while(arr[i]!='\0')
        {
            count++;
            i++;
        }

        mul=count/m;
        t=0;
        for(k=1;k<=m;k++)
        {
            for(l=(mul*k)-1;l>=t;l--)
            {
                printf("%c",arr[l]);
            }
            t=t+mul;
            //printf("\n");
        }
        printf("\n");
        //printf("%d %d %d\n",m,count,mul);
    }
}
