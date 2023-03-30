#include<stdio.h>
int main()
{
    int flag,i,rem_4,rem_100,rem_400,rem_15,rem_55;
    char m[10000];
    int print=0;
    freopen("uva_10070.txt","w",stdout);
    while(scanf("%s",&m)!=EOF)
    {
        if(m[0]=='/') break;
        if ( print != 0 )
            printf("\n");
        print = 1;
        rem_4=0;
        rem_100=0;
        rem_400=0;
        rem_15=0;
        rem_55=0;
        i=0;
        while(m[i]!='\0')
        {
            rem_4=((rem_4*10)+m[i]-48)%4;
            rem_100=((rem_100*10)+m[i]-48)%100;
            rem_400=((rem_400*10)+m[i]-48)%400;
            rem_15=((rem_15*10)+m[i]-48)%15;
            rem_55=((rem_55*10)+m[i]-48)%55;
            i++;
        }

        //printf("%d %d %d %d %d\n",rem_4,rem_100,rem_400,rem_15,rem_55);
        flag=0;
        if(((rem_4==0) && (rem_100)!=0) ||(rem_400==0))
        {
            printf("This is leap year.\n");
            flag=1;
        }
        if((rem_15)==0)
        {
            printf("This is huluculu festival year.\n");
            flag=1;

        }
        if(((rem_4==0) && (rem_100)!=0) ||(rem_400==0))
        {
            if((rem_55)==0)
            {
                printf("This is bulukulu festival year.\n");
                flag=1;
            }

        }
        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
        //printf("\n");
        /*
        flag=0;
        if(((year%4==0) && (year%100)!=0) ||(year%400==0))
        {
            printf("This is leap year.\n");
            if((year%55)==0)
            {
                printf("This is bulukulu festival year.\n");
            }
            flag=1;
        }
        if((year%15)==0)
        {
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(((year%4==0) && (year%100)!=0) ||(year%400==0))
        {
            if((year%55)==0)
            {
                printf("This is bulukulu festival year.\n");
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("This is an ordinary year.\n");
        }
        printf("\n");
        */
    }

}
