#include<bits/stdc++.h>
using namespace std;
class dothi
{
    int n;
    bool a[1000][1000];
    bool c[1000];
    public:
    void readdata();
    void dfs(int);
    void kt();
    void reset();
};
void dothi::reset()
{
    for(int i=1;i<=n;i++)c[i]=0;
}
void dothi::readdata()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
}
void dothi::dfs(int u)
{
    c[u]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[u][i]==1&&c[i]==0)
        {
            dfs(i);
        }
    }
}
void dothi::kt()
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                reset();
                a[i][j]=0;
                a[j][i]=0;
                dfs(1);
                for(int k=1;k<=n;k++)
                {
                    if(c[k]==0)
                    {
                        cout<<i<<" "<<j<<endl;
                        break;
                    }
                }
                a[i][j]=1;
                a[j][i]=1;
                
            }
        }
    }
}
int main()
{
    dothi a;
    a.readdata();
    a.kt();
}
