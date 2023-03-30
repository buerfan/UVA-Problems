#include<stdio.h>
#include<string.h>
int main()
{
    int testCase;
    int k;
    char input[100][100];
    int value[100],click[100],num,i;
    scanf("%d",&testCase);
    strcpy(input[0]," ");
    strcpy(input[1],".,?""");
    strcpy(input[2],"abc");
    strcpy(input[3],"def");
    strcpy(input[4],"ghi");
    strcpy(input[5],"jkl");
    strcpy(input[6],"mno");
    strcpy(input[7],"pqrs");
    strcpy(input[8],"tuv");
    strcpy(input[9],"wxyz");
    //input[1]="def";
    //input[2][]={{'a','s'},{'z','x'}};
    for(k=1;k<=testCase;k++)
    {
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&value[i]);
        }
        for(i=0;i<num;i++)
        {
            scanf("%d",&click[i]);
        }
        for(i=0;i<num;i++)
        {
            if(value[i]==1 && click[i]==4)
            {
                printf("\"");
            }
            else
            printf("%c",input[value[i]][click[i]-1]);
        }
        printf("\n");
    }
}
