#include<stdio.h>
int graph[100][100];
int node,edge;
int color[100],discovered[100],predecessor[100];
int queue[100],head,tail;
void BFS(int source,int ttl)
{
    int u,i,v,count;
    for(u=1;u<=11;u++)
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

        for(v=1;v<=11;v++)
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

    for(i=1;i<=11;i++)
    {
        printf("%d ",color[i]);
    }
    printf("\n");
    for(i=1;i<=11;i++)
    {
        printf("%d ",discovered[i]);
    }
    printf("\n");
    count=0;
    for(i=1;i<=11;i++)
    {
        if(discovered[i]<=ttl)
        {
            count++;
        }
    }
    printf("%d\n",11-count);
    printf("\n");
}
int main()
{
    int start,end,ttl,i,j,source;
    freopen("uva_336.txt","r",stdin);
    scanf("%d",&edge);

    for(i=1;i<=edge;i++)
    {
        scanf("%d %d",&start,&end);
        graph[start][end]=1;
        graph[end][start]=1;
    }

    for(i=1;i<=edge;i++)
    {
        //printf("%d ",graph[i])
    }
/*
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }*/
    while(scanf("%d %d",&source,&ttl)!=EOF)
    {
        if(source==0 && ttl==0) break;
        printf("%d %d\n",source,ttl);
        BFS(source,ttl);
    }

/*
    while(scanf("%d %d",&source,&ttl)!=EOF)
    {
        if(source==0 && ttl==0) break;
        BFS(source);
    }
*/

}

