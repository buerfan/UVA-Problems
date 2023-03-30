#include<stdio.h>
int main()
{
    int testCase=1;
    int input;
    int arrInput[1010];
    int counter0;
    int result,i;
    freopen("uva_12279.txt","w",stdout);
    while(scanf("%d",&input)!=EOF)
    {
        counter0=0;
        if(input==0)
            break;
        for(i=1;i<=input;i++)
        {
            scanf("%d",&arrInput[i]);
            if(arrInput[i]==0)
            {
                counter0++;
            }
        }
        result=(input-2*counter0);
        printf("Case %d: %d\n",testCase,result);
        testCase++;
    }

}
