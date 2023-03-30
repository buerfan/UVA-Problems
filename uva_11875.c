#include<stdio.h>
int main()
{
    int testCase;
    int i,j,player;
    int age[100];
    int midPlayer;
    //freopen("uva_11875.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1; i<=testCase; i++)
    {
        scanf("%d",&player);
        for(j=1; j<=player; j++)
        {
            scanf("%d",&age[j]);
        }

        midPlayer=(player/2)+1;
        printf("Case %d: %d\n",i,age[midPlayer]);
    }

}
