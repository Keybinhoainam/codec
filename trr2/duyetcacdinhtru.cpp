#include<bits/stdc++.h>
using namespace std;
int n,a[1000][1000];
bool a1[1000];
void dfs(int u)
{
    a1[u]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[u][i]==1&&a1[i]==0)
        {
            dfs(i);
        }
    }
}
void kt()
{
    for(int i=1;i<=n;i++)
    {
        memset(a1,0,sizeof(a1));
        a1[i]=1;
        dfs(1);
        for(int k=1;k<=n;k++)
        {
            if(a1[k]==0)
            {
                cout<<i<<" ";
                break;
            }
        }
        a1[i]=0;
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
    kt();
}
