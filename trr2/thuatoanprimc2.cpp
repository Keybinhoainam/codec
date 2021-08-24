#include<iostream>
#define MAX 100
using namespace std;
struct edg{
    int dau,cuoi,h;
};
class dothi{
    int n,a[100][100],ne,atree[100][100];
    edg graph[100],tree[100];
    public:
    int s;
    bool chuaxet[100];
    void readdata();
    void init();
    void dfstree(int i);
    void bubblesort();
    void prim(int s);
    
};
void dothi::readdata()
{
    cin>>n>>s;
    ne=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>0&&i<j)
            {
                ne++;
                graph[ne].dau=i;
                graph[ne].cuoi=j;
                graph[ne].h=a[i][j];
            }
        }
    }
}
void dothi::init()
{
    for(int i=1;i<=n;i++)
    {
        chuaxet[i]=true;
    }
}
void dothi::dfstree(int u)
{
    chuaxet[u]=false;
    for(int i=1;i<=n;i++)
    {
        if(atree[u][i]==1&&chuaxet[i]==true)
        dfstree(i);
        
    }
}
void dothi::bubblesort()
{
    for(int i=1;i<=ne;i++)
    {
        for(int j=ne;j>=i+1;j--)
        {
            if(graph[j].h<graph[j-1].h)
            {
                swap(graph[j],graph[j-1]);
            }
        }
    }
}
void dothi::prim(int s)
{
    int dH=0;
    int net=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)atree[i][j]=0;
        
    }
    bubblesort();
    while(net!=n-1)
    {
    	int check=0;
        for(int i=1;i<=ne;i++)
        {
            init();
            dfstree(s);
            int dau=graph[i].dau,cuoi=graph[i].cuoi;
            if(chuaxet[dau]!=chuaxet[cuoi]){
                net++;
                tree[net].dau=dau;
                tree[net].cuoi=cuoi;
                dH+=graph[i].h;
                atree[dau][cuoi]=atree[cuoi][dau]=1;
                check=1;
                break;
            }
//            if(check==0)
//            {
//            	cout<"\ndo thi khong lien thong";
//            	return;
//			}
        }
    }
    cout<<"dH = "<<dH<<endl;
    for(int i=1;i<=net;i++)
    {
        cout<<tree[i].dau<<" "<<tree[i].cuoi<<endl;
    }
}
int main()
{
    dothi g;
    g.readdata();
    g.prim(g.s);
}
