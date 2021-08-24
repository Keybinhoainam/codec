#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
class dothi{
    int n,s,a[100][100],d[100],truoc[100];
    public:
    void nhap();
  //  void init();
    void bellman();
};
void dothi::nhap()
{
    int x;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>x;
            if(x==0)x=INF;
            a[i][j]=x;
        }
    }
}
void dothi::bellman()
{
    for(int i=1;i<=n;i++)
    {
        d[i]=a[s][i];truoc[i]=s;
    }
    d[s]=0;
    for(int k=1;k<=n-2;k++)
    {
        for(int v=1;v<=n;v++)
        {
            if(v!=s)
            {
                for(int u=1;u<=n;u++)
                {
                    if(d[v]>d[u]+a[u][v]&&d[u]!=INF&&a[u][v]!=INF)
                    {
                        d[v]=d[u]+a[u][v];
                        truoc[v]=u;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(d[i]<INF)
        {
            cout<<"K/c "<<s<<" -> "<<i<<" = "<<d[i];
            cout<<"\t";
            int t=truoc[i];
            cout<<i<<" <- ";
            while(t!=s)
            {
                cout<<t<<" <- ";
                t=truoc[t];
            }
            cout<<s;
        }
        else
        {
            cout<<"K/c "<<s<<" -> "<<i<<" = "<<"INF";
        }
        cout<<endl;
    }
}
int main()
{
    dothi a;
    a.nhap();
    a.bellman();
}













