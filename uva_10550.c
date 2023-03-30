#include<stdio.h>
int CalculateMod()
{

}
int main()
{
    int a,b,c,d;
    int val1,val2,val3;
    int result;
    //freopen("output.txt","w",stdout);
    while(1)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        result=0;
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }

        //result=720;
        if(a<b)
        {
            val1=(a+(40-b))*9;
        }
        else
        {
            //val1=CalculateMod();
            if((b-a)<0)
            {
                val1=(b-a)*(-1)*9;
            }
            else
            val1=(b-a)*9;
        }
    //  printf("val1: %d\n",val1);
        if(b>c)
        {
            val2=((40-b)+c)*9;
        }
        else
        {
            if((c-b)<0)
            {
                val2=(c-b)*(-1)*9;
            }
            else
            val2=(c-b)*9;
        }
      //  printf("val2: %d\n",val2);
        if(c<d)
        {
            val3=(c+(40-d))*9;
        }
        else
        {
            if((d-c)<0)
            {
                val3=(d-c)*(-1)*9;
            }
            else
            val3=(d-c)*9;
        }
        //printf("val3: %d\n",val3);
        result=720+360+val1+val2+val3;
        printf("%d\n",result);
    }
    return 0;
}
