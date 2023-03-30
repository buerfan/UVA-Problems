#include<stdio.h>
int N;
int edge;
int graph[900][900];
int node[1000];
int color[1000],discovered[1000],predecessor[1000];
int queue[1000],head,tail;

void init()
{
    int i,j;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            graph[i][j]=0;
        }
    }
}
void BFS(int source,int ttl)
{
    int u,i,v,count;
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

    for(i=0; i<N; i++)
    {
        //printf("%d ",color[i]);
    }
    //printf("\n");
    count=0;
    for(i=0; i<N; i++)
    {
        if(discovered[i]<=ttl)
        {
            count++;
        }
        //printf("%d ",discovered[i]);
    }
    //printf("\n");
    printf("%d",N-count);
    //printf("\n");
}
int searchVertex(int value)
{
    int i;
    for(i=0; i<N; i++)
    {
        if(node[i]==value)
        {
            return i;
        }
    }

    node[N]=value;
    N++;
    return N-1;
}
int main()
{
    int index1;
    int index2;
    int start,end;
    int i,j;
    int source,sor,ttl;
    int Case=1;
    //freopen("uva_336.txt","w",stdout);
    while(scanf("%d",&edge)!=EOF)
    {
        init();
        if(edge==0) break;
        N=0;
        for(j=1; j<=edge; j++)
        {
            scanf("%d %d",&start,&end);
            index1=searchVertex(start);
            index2=searchVertex(end);
            //printf("%d %d\n",index1,index2);
            graph[index1][index2]=1;
            graph[index2][index1]=1;
        }

        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                //printf("%d ",graph[i][j]);
            }
            //printf("\n");
        }
        while(scanf("%d %d",&source,&ttl)!=EOF)
        {
            if(source==0 && ttl==0) break;
            sor=searchVertex(source);
            printf("Case %d: ",Case++);
            BFS(sor,ttl);
            printf(" nodes not reachable from node %d with TTL = %d.\n",source,ttl);

        }
    }


}
