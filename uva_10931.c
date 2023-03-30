#include<stdio.h>
int main()
{
    int queue[100000],i,head,count,n;
    while(scanf("%d",&n)!=EOF)
    {
        count=1;
        head=0;
        if(n==0) break;
        while(n!=1)
        {
            queue[head++]=n%2;
            n=n/2;
        }

        //printf("%d\n",head);
        printf("The parity of 1");
        for(i=(head-1);i>=0;i--)
        {
            printf("%d",queue[i]);
            if(queue[i]==1)
            {
                count++;
            }
        }
        //printf("\n");
        printf(" is %d (mod 2).\n",count);
    }
}
