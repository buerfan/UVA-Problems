#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int testCase,i,key,sum,count,arr[10010],m,n,j,k;
    freopen("uva_13109.txt","w",stdout);
    scanf("%lld",&testCase);
    for(k=1;k<=testCase;k++)
    {
        scanf("%lld %lld",&m,&n);
        for(j=1;j<=m;j++)
        {
            scanf("%lld",&arr[j]);
        }
        sort(arr,arr+j);
/*
        for(j=2; j<=m; j++)
        {
            key=arr[j];
            i=j-1;

            while(i>0 && arr[i]>key)
            {
                arr[i+1]=arr[i];
                i=i-1;
            }
            arr[i+1]=key;
        }
*/
        for(j=1;j<=m;j++)
        {
            //printf("%lld",arr[j]);
        }
        sum=0;
        count=0;
        for(j=1;j<=m;j++)
        {
            sum=sum+arr[j];
            if(sum<=n)
            {
                count++;
            }

        }
        printf("%lld\n",count);
    }
}
