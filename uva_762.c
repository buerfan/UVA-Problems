#include<stdio.h>
#include<string.h>
int graph[900][900];
int color[10000],discovered[10000],predecessor[10000];
int queue[10000],head,tail;
int N;
char Node[900][900];

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
        printf("No route\n");
    }
    else
    {
        PrintPath(s,predecessor[v]);
        printf("%s %s\n",Node[predecessor[v]],Node[v]);
    }
    //printf("\n");
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
    for(i=0; i<800; i++)
    {
        for(j=0; j<800; j++)
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
int addNode(char node[])
{
    int i;
    for(i=0; i<N; i++)
    {
        if(strcmp(Node[i],node)==0)
        {
            return i;
        }
    }
    strcpy(Node[N],node);
    N++;
    return N-1;
}
int main()
{
    int edge,i,j,index1,index2,source,destination,c=0;
    char start[100],end[100],sour[100],des[100];
    //freopen("bfs_input_str.txt","r",stdin);
    //freopen("uva_762.txt","r",stdin);
    //freopen("uva_762_w.txt","w",stdout);
    while(scanf("%d",&edge)!=EOF)
    {
        if(c>0) printf("\n");
        c++;
        N=0;
        init();
        for(i=1; i<=edge; i++)
        {
            scanf("%s %s",&start,&end);

            index1=addNode(start);
            index2=addNode(end);
            graph[index1][index2]=1;
            graph[index2][index1]=1;
            //printf("%d %d\n",index1,index2);
        }
        //printf("%d\n",N-1);
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                //printf("%d ",graph[i][j]);
            }
            //printf("\n");
        }

        scanf("%s %s",&sour,&des);
        source=addNode(sour);
        destination=addNode(des);
        BFS(source);
        PrintPath(source,destination);
        //printf("\n");
        //init();
    }
}
