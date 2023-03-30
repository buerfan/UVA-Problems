#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    char input[35];
    int length,i;
    //freopen("uva_10921.txt","w",stdout);
    while(gets(input))
    {
        //if(input[0]=='0') break;
        length=strlen(input);
        for(i=0;i<length;i++)
        {
            ch=input[i];
            if(ch=='A' || ch=='B' || ch=='C')
            {
                printf("2");
            }
            else if(ch=='D' || ch=='E' || ch=='F')
            {
                printf("3");
            }
            else if(ch=='G' || ch=='H' || ch=='I')
            {
                printf("4");
            }
            else if(ch=='J' || ch=='K' || ch=='L')
            {
                printf("5");
            }
            else if(ch=='M' || ch=='N' || ch=='O')
            {
                printf("6");
            }
            else if(ch=='P' || ch=='Q' || ch=='R' || ch=='S')
            {
                printf("7");
            }
            else if(ch=='T' || ch=='U' || ch=='V')
            {
                printf("8");
            }
            else if(ch=='W' || ch=='X' || ch=='Y' || ch=='Z')
            {
                printf("9");
            }
            else printf("%c",ch);

        }
        printf("\n");
    }
}
