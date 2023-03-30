#include<stdio.h>
#include<math.h>
int main()
{
    int deter,input,i,a,b,row_num,start,upor[1000],nich[1000];
    //freopen("uva_264.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        deter=1+(8*input);
        row_num=ceil((sqrt(deter)-1)/2);


        start=((row_num-1)*(row_num))/2;
        //printf("%d\n",start);

        if(row_num%2==0)
        {
            a=1;
            b=row_num;
            for(i=1; i<=row_num; i++)
            {
                if((start+i)==input)
                {
                    printf("TERM %d IS %d/%d\n",input,a,b);
                }
                a++;
                b--;

            }
        }
        else
        {
            a=row_num;
            b=1;
            for(i=1; i<=row_num; i++)
            {
                if((start+i)==input)
                {
                    printf("TERM %d IS %d/%d\n",input,a,b);
                }
                a--;
                b++;

            }
        }


    }
}
