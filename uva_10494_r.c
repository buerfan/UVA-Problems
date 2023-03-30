#include<stdio.h>

int main()
{
    char m[10000],n_s[10000];
    char ch;
    long long int n,length,i,rem,f_rem,div,length_n,count,flag,test;

    //freopen("uva_10494.txt","w",stdout);
    while(scanf("%s %c %lld",&m,&ch,&n)!=EOF)
    {
        //if(ch=='0') break;
        if(ch=='%')
        {
            //length=strlen(m);
            rem=0;
            //for(i=0; i<length; i++)
            i=0;
            while(m[i]!='\0')
            {
                rem=((rem*10)+m[i]-48)%n;
                i++;
            }
            printf("%lld\n",rem);
        }
        else
        {
            if(m[0]=='0') printf("0\n");
            else
            {
                flag=0;
            //length=strlen(m);
            //length_n=strlen(n_s);
            rem=0;
            //for(i=0; i<length; i++)
            i=0;
            while(m[i]!='\0')
            {
                rem=((rem*10)+m[i]-48);
                //if(rem==0) printf("0");
                if(rem<n && flag==1 ) printf("0");
                if(rem>=n)
                {
                    div=rem/n;
                    rem=rem%n;
                    printf("%d",div);
                    flag=1;
                }
                i++;
            }
            if(rem<n && flag==0)
            printf("0");
            printf("\n");
            }

        }





    }
}
