#include<stdio.h>
#include<string.h>
int main()
{
    int testCase,count,sum,length,j,i,k,flag=0;
    char input[100],str1[11]="adgjmptw",str2[11]="behknqux",str3[11]="cfilorvy",str4[10]="sz",ch;
    //freopen("uva_11530.txt","w",stdout);
    scanf("%d",&testCase);
    for(i=0;i<=testCase;i++)
    {
        //scanf("%s",&input);
        //str="adgjmptw";
        gets(input);
        length=strlen(input);
        sum=0;
        for(j=0;j<length;j++)
        {
            ch=input[j];



            if(strchr(str1,ch))
            {
                //printf("%c",ch);
                sum=sum+1;
            }
            else if(strchr(str2,ch))
            {
                sum=sum+2;
            }
            else if(strchr(str3,ch))
            {
                sum=sum+3;
            }
            else if(strchr(str4,ch))
            {
                sum=sum+4;
            }
            else
            sum=sum+1;
            /*
            if(ch=='a' || ch=='d' || ch=='g' || ch=='j' || ch=='m' || ch=='p' || ch=='t' ||ch=='w' )
            {
                sum=sum+1;
            }
            else if(ch=='b' || ch=='e' || ch=='h' || ch=='k' || ch=='n' || ch=='q' || ch=='u' ||ch=='x' )
            {
                sum=sum+2;
            }
            else if(ch=='c' || ch=='f' || ch=='i' || ch=='l' || ch=='o' || ch=='r' || ch=='v' ||ch=='y' )
            {
                sum=sum+3;
            }
            else if(ch=='s' || ch=='z')
            {
                sum=sum+4;
            }
            else
            sum=sum+1;
*/
        }
        if(flag==0) {flag=1;}
        else
        printf("Case #%d: %d\n",i,sum);
    }
}
