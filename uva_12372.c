#include<stdio.h>
int main()
{
    int testCase;

    int i;
    int length,width,height;
    scanf("%d",&testCase);
    //freopen("uva_12372.txt","w",stdout);
    for(i=1;i<=testCase;i++)
    {
        scanf("%d %d %d",&length,&width,&height);

        if((length>=1 && length<=20) && (width>=1 && width<=20) && (height>=1 && height<=20))
        {
            printf("Case %d: good\n",i);
        }
        else
        printf("Case %d: bad\n",i);
    }
}
