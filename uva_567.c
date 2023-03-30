#include<stdio.h>
int graph[900][900];
int color[10000],discovered[10000],predecessor[10000];
int queue[10000],head,tail;

void BFS(int source)
{
    int u,i,v;
    for(u=1; u<=19; u++)
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

        for(v=1; v<=19; v++)
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
    printf("\n");
    for(i=1; i<=19; i++)
    {
        printf("%d ",color[i]);
    }
    //printf("\n");
    for(i=1; i<=19; i++)
    {
        //printf("%d ",discovered[i]);
    }
    //printf("\n");
    for(i=1; i<=19; i++)
    {
        //printf("%d ",predecessor[i]);
    }
    //printf("\n");
}

int main()
{
    int i,j,k,input;
    int con,connection,source,destination;
    freopen("uva_567_r.txt","r",stdin);
    //freopen("uva_567_r.txt","w",stdout);

    for(i=1;i<=19;i++)
    {
        for(j=1;j<=con;j++)
        {
            graph[i][j]=0;
        }
        //printf("\n");
    }
    for(i=1;i<=19;i++)
    {
        scanf("%d",&con);
        for(j=1;j<=con;j++)
        {
            scanf("%d",&connection);
            graph[i][connection]=1;
            graph[connection][i]=1;
        }
    }


    for(i=1;i<=19;i++)
    {
        for(j=1;j<=19;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    //scanf("%d %d",&source,&destination);
    //printf("%d %d",source,destination);
    //BFS(source);
    //scanf("%d",&input);
    for(k=1;k<=input;k++)
    {

    }
}
