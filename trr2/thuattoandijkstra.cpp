#include<iostream>
#define MAX 100
#define INF 1000000
using namespace std;
class dothi{
  int n,a[MAX][MAX];
  public:
  bool chuaxet[MAX];
  int s,d[MAX],truoc[MAX];
  void readdata();
  void init();
  void dijkstra();
};
void dothi::readdata(){
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                a[i][j]=INF;
            }
        }
    }
}
void dothi::init()
{
    for(int v=1;v<=n;v++)
    {
        d[v]=a[s][v];
        truoc[v]=s;
        chuaxet[v]=true;
    }
    d[s]=0;
    chuaxet[s]=false;
}
void dothi::dijkstra()
{
    init();
    for(int i=1;i<=n;i++)
    {
        if(chuaxet[i]==true)
        {
            int u=0,du=INF;
            for(int z=1;z<=n;z++)
            {
                if(chuaxet[z]&&d[z]<du)
                {
                    u=z;
                    du=d[z];
                }
            }
            if(u!=0)
            {
                chuaxet[u]=false;
                for(int v=1;v<=n;v++)
                {
                    if(chuaxet[v]&&d[v]>du+a[u][v])
                    {
                        d[v]=du+a[u][v];
                        truoc[v]=u;
                    }
                }
            }
            else
            {
                chuaxet[i]=false;
            }
            i=0;
        }
    }
    for(int t=1;t<=n;t++)
    {
        if(d[t]==INF)
        {
            cout<<"\nK/c "<<s<<" -> "<<t<<" = INF;";
        }
        else
        {
            cout<<"\nK/c "<<s<<" -> "<<t<<" = "<<d[t]<<";";
            cout<<"\t";
            cout<<t<<" <- ";
            int t1=truoc[t];
            while(t1!=s)
            {
                cout<<t1<<" <- ";
                t1=truoc[t1];
            }
            cout<<s;
        }
        cout<<endl;
    }
}
int main()
{
    dothi a;
    a.readdata();
    a.dijkstra();
}











