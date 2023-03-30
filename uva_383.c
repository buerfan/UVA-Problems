#include<stdio.h>
#include<string.h>
unsigned int graph[10000][10000];
char Node[10000];
char AllNode[900][900];
int color[10000],discovered[10000],predecessor[10000];
int queue[10000],head,tail;
int N;
int count;

void PrintPath(int s,int v)
{
//printf("%d",N);
    if(s==v)
    {
        //printf("\n");
        return;
    }//printf("%s ",Node[s]);
    else if(predecessor[v]==-1)
    {
        printf("NO SHIPMENT POSSIBLE\n");
    }
    else
    {
        count++;
        PrintPath(s,predecessor[v]);
        //printf("%s %s\n",AllNode[predecessor[v]],AllNode[v]);
    }

}
void BFS(int source)
{
    int u,i,v;
    for(u=0; u<N; u++)
    {
        if(u!=source)
        {
            color[u]=0;
            discovered[u]=100000;
            predecessor[u]=-1;
        }
    }

    color[source]=1;
    discovered[source]=0;
    predecessor[source]=-1;
    head=0;
    tail=0;
    queue[head++]=source;

    while(head!=tail)
    {
        u=queue[tail++];

        for(v=0; v<N; v++)
        {
            if(graph[u][v]==1 && color[v]==0)
            {
                color[v]=1;
                discovered[v]=discovered[u]+1;
                predecessor[v]=u;
                queue[head++]=v;
            }
        }
        color[u]=2;
    }
    //printf("\n");
    for(i=0; i<N; i++)
    {
        //printf("%d ",color[i]);
    }
    //printf("\n");
    for(i=0; i<N; i++)
    {
        //printf("%d ",discovered[i]);
    }
    //printf("\n");
    for(i=0; i<N; i++)
    {
        //printf("%d ",predecessor[i]);
    }
    //printf("\n");
}

void init()
{
    int i,j;
    for(i=0; i<100000; i++)
    {
        for(j=0; j<100000; j++)
        {
            graph[i][j]=0;
            graph[j][i]=0;
        }

        color[i]=0;
        discovered[i]=100000;
        predecessor[i]=-1;
        queue[i]=0;
    }
}

int searchNode(char Node[])
{
    int i;
    for(i=0; i<N; i++)
    {
        if(strcmp(AllNode[i],Node)==0)
        {
            return i;
        }
    }
}

int addNode(char Node[])
{
    //int i;
    strcpy(AllNode[N],Node);
    N++;

}
int main()
{
    int testCase,te,i,j,t;
    int r_cost;
    int index1,index2;
    int source,destination;
    int node,edge,request;
    int test=0;
    char start[100],end[100],sour[100],des[100];
    //freopen("uva_383_r.txt","r",stdin);
    //freopen("uva_383_w.txt","w",stdout);
    scanf("%d",&testCase);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    for(te=1; te<=testCase; te++)
    {
        if(test>0) printf("\n");
        test++;
        printf("DATA SET  %d\n\n",te);
        init();
        N=0;
        scanf("%d %d %d",&node,&edge,&request);
        for(i=0; i<node; i++)
        {
            scanf("%s",&Node);
            addNode(Node);
        }

        for(i=1; i<=edge; i++)
        {
            scanf("%s %s",&start,&end);
            index1=searchNode(start);
            index2=searchNode(end);

            graph[index1][index2]=1;
            graph[index2][index1]=1;
        }

        //printf("%d\n",N);
        for(t=1; t<=request; t++)
        {
            count=0;
            scanf("%d %s %s",&r_cost,&sour,&des);
            source=searchNode(sour);
            destination=searchNode(des);
            BFS(source);
            PrintPath(source,destination);

            if(count!=0)
            printf("$%d\n",(r_cost*count*100));

        }

        for(i=0; i<N; i++)
        {
            //printf("%s\n",AllNode[i]);
        }
        //printf("\n");

        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                //printf("%d ",graph[i][j]);
            }
            //printf("\n");
        }
    }

    printf("\nEND OF OUTPUT\n");
}
