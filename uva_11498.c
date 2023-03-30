#include<stdio.h>
int main()
{
    int testCase;
    int center_x,center_y;
    int i,x,y;
    //freopen("uva_11498.txt","w",stdout);
    while(scanf("%d",&testCase)!=EOF)
    {
        if(testCase==0)
        break;
        scanf("%d %d",&center_x,&center_y);
        for(i=1;i<=testCase;i++)
        {
            scanf("%d %d",&x,&y);
            if(x==center_x || y==center_y)
            {
                printf("divisa\n");
            }
            else if(x<center_x && y>center_y)
            {
                printf("NO\n");
            }
            else if(x>center_x && y>center_y)
            {
                printf("NE\n");
            }
            else if(x<center_x && y<center_y)
            {
                printf("SO\n");
            }
            else if(x>center_x && y<center_y)
            {
                printf("SE\n");
            }

        }
    }
}
