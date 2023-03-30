#include<stdio.h>
#include<string.h>
int main()
{
    char m[10000],n_s[10000];
    char ch;
    long long int n,length,i,rem,f_rem,div,length_n,count,flag,test;

    //freopen("uva_10494.txt","w",stdout);
    while(scanf("%s %c %s",&m,&ch,&n_s)!=EOF)
    {
        if(ch=='0') break;
        if(ch=='%')
        {
            length=strlen(m);
            rem=0;
            for(i=0; i<length; i++)
            {
                rem=((rem*10)+m[i]-48)%n;
                //printf("%d ",rem);
            }
            printf("%lld\n",rem);
        }
        else
        {
            flag=0;
            length=strlen(m);
            length_n=strlen(n_s);
            n=0;
            for(i=0;i<length_n;i++)
            {
                n=(n*10)+n_s[i]-48;
            }
            f_rem=0;
            for(i=0; i<length_n; i++)
            {
                f_rem=((f_rem*10)+m[i]-48);
            }
            //printf("%d\n",f_rem);
            if( length<length_n)
            {
                printf("0");
            }
            else
            {
                rem=0;
            count=0;
            for(i=0; i<length; i++)
            {

                rem=((rem*10)+m[i]-48);
                test=rem;
                while(test!=0)
                {
                    count++;
                    test=test/10;
                }

                if(rem==0) printf("0");
                if(rem<n && flag==1 ) printf("0");
                if(rem>=n)
                {
                    div=rem/n;
                    rem=rem%n;
                    printf("%d",div);
                    flag=1;
                }
            }
            }

            printf("\n");
        }





    }
}
