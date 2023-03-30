#include<stdio.h>
void fabbonaci(int input)
{
    int i,arr[1000];
    arr[0]=0;
    arr[1]=1;

    for(i=2; i<=input; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    for(i=1; i<=input; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[100][100];
    int head=0;
    arr[0][0]=0;
    arr[1][0]=1;
    int i,j,k=0;
    for(i=2; i<=7; i++)
    {
        for(j=0; j<=k; j++)
        {
            arr[i][j]=arr[i-2][j]+arr[i-1][j];
            if(arr[i][j]>10)
            {
                k=1;
                prod=arr[i][j];
                arr[i][head]=prod%10;

            }
            */
        }

    }

    for(i=0; i<=7; i++)
    {
        for(j=0; j<=k; j++)
        {
            printf("%d ",arr[i][j]);

        }

    }
    /*
    int input;
    while(scanf("%d",&input)!=EOF)
    {
        if(input==1) printf("1\n");
        else
        {
            fabbonaci(input);
        }
    }

    */
}
