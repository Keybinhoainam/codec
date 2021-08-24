#include<bits/stdc++.h>
using namespace std;
int n;
bool a[100][100],c1[100];
queue<int>kq1;
void dfs(int u)
{
    c1[u]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[u][i]==1&&c1[i]==0)
        {
            kq1.push(u);
            kq1.push(i);
            dfs(i);
            
        }
    }
}
void bfs(int u)
{
    queue<int>kq;
    queue<int>q;
    q.push(u);
    c1[u]=1;
    while(!q.empty())
    {
        int t=q.front();q.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[t][i]==1&&c1[i]==0)
            {
                q.push(i);
                c1[i]=1;
                kq.push(t);
            kq.push(i);
            }
        }
    }
    while(!kq.empty())
    {
        cout<<kq.front()<<" ";kq.pop();
        cout<<kq.front()<<endl;kq.pop();
    }
}
void kt(int u)
{
    memset(c1,0,sizeof(c1));
    cout<<"DFS tree\n";
    dfs(u);
    while(!kq1.empty())
    {
        cout<<kq1.front()<<" ";kq1.pop();
        cout<<kq1.front()<<endl;kq1.pop();
    }
    memset(c1,0,sizeof(c1));
    cout<<"BFS tree\n";
    bfs(u);
}
int main()
{
    int u;
    cin>>n>>u;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    kt(u);
}
