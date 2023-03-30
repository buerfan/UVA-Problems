#include<stdio.h>
int main()
{
    int num;
    int i,j,input[10010];
    int totalPrice;
    int temp,ini_val,last_val;
    int print=0;
    int min_i,min;
    //freopen("uva_11057.txt","w",stdout);
    while(scanf("%d",&num)!=EOF)
    {
        //if(num==0) break;
        ini_val=0;
        last_val=0;
        for(i=1; i<=num; i++)
        {
            scanf("%d",&input[i]);
        }
        scanf("%d",&totalPrice);

        min=1000000;
        for(i=1; i<=num; i++)
        {
            for(j=1; j<=num; j++)
            {
                if(i!=j)
                {
                    temp=input[i]+input[j];
                    if(temp==totalPrice && input[i]<=input[j])
                    {
                        min_i=input[j]-input[i];
                        if(min_i<=min)
                        {
                            min=min_i;
                            ini_val=input[i];
                            last_val=input[j];
                            //printf("%d %d\n",ini_val,last_val);

                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",ini_val,last_val);
        printf("\n");
    }


}
