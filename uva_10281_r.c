#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int i,length,h,m,s;
    double res,now=0,time=0,speed=0,distance=0;
    while(gets(input))
    {
        res=0.0;
        length=strlen(input);
        h=(input[0]-48)*10+input[1]-48;
        m=(input[3]-48)*10+input[4]-48;
        s=(input[6]-48)*10+input[7]-48;

        for(i=9;i<length;i++)
        {
            res=res*10+(input[i]-48);
        }

        now=h*3600.0+m*60.0+s;

        distance=distance+((now-time)*speed);

        time=now;

        if(length==8)
        printf("%02d:%02d:%02d %.2lf km\n",h,m,s,distance/3600);
        else
        speed=res;

    }
}
