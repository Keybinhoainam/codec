#include<bits/stdc++.h>
using namespace std;
bool c[1000],a[1000][1000];
int n;
void dfs(int u)
{
    c[u]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[u][i]==1&&c[u]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    memset(c,0,sizeof(c));
    dfs(1);
    int i=1;
    for(i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
            cout<<"not strongly connected";
            break;
        }
    }
    if(i==n+1)cout<<"strongly connected";
    cout<<endl;
}
