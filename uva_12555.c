#include<stdio.h>
#include<string.h>
int main()
{
    int testCase,j,i,num1,num2,flag=0,length;
    char input[100],ch;
    double weight;
    freopen("uva_12555.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=1; i<=testCase+1; i++)
    {
        gets(input);

        if(flag==0)
        {
            flag=1;
        }
        else
        {

            length=strlen(input);
            if(length<=4)
            {
                for(j=0; j<length; j++)
                {
                    ch=input[j];
                    if(ch>='1' && ch<='9' && input[j+1]!='0')
                    {
                        num1=input[j]-48;
                        break;
                    }
                    else if(ch>='1' && input[j+1]=='0')
                    {
                        num1=10;
                        break;
                    }
                }
                printf("Case %d: %g\n",i-1,((num1*0.5)));
            }
            else
            {
                for(j=0; j<length; j++)
                {
                    ch=input[j];
                    if(ch>='1' && ch<='9' && input[j+1]!='0')
                    {
                        num1=input[j]-48;
                        break;
                    }
                    else if(ch>='1' && input[j+1]=='0')
                    {
                        num1=10;
                        break;
                    }
                }

                for(j=length-1; j>=0; j--)
                {
                    ch=input[j];
                    if(ch>='1' && ch<='9')
                    {
                        num2=input[j]-48;
                        break;
                    }

                }
                printf("Case %d: %g\n",i-1,((num1*0.5)+(num2*0.05)));

            }
            /*
            if(length==7)
            {
                //printf("%d\n",input[0]-48);
                weight=((input[0]-48)*0.5)+((input[4]-48)*0.05);
            }
            else if(length==8)
            {
                weight=(10*0.5)+((input[5]-48)*0.05);
            }
            else if(length==3)
            weight=((input[0]-48)*0.5);
            else weight=(10*0.5);
            printf("Case %d: %g\n",i-1,weight);
            */
        }

    }
}
