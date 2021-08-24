#include<bits/stdc++.h>
using namespace std;
int u,s,t;
bool a[1000][1000],c1[1000],c2[1000];
int truoc1[1000],truoc2[1000];
void dfs(int s)
{
    c1[s]=1;
    for(int i=1;i<=u;i++)
    {
        if(c1[i]==0&&a[s][i]==1)
        {
            truoc1[i]=s;
            dfs(i);
        }
    }
}
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    c2[s]=1;
    while(!q.empty())
    {
        int t1=q.front();q.pop();
        for(int i=1;i<=u;i++)
        {
            if(c2[i]==0&&a[t1][i]==1)
            {
                truoc2[i]=t1;
                c2[i]=1;
                q.push(i);
            }
        }
    }
}
int main()
{
    cin>>u>>s>>t;
    for(int i=1;i<=u;i++)
    {
        for(int j=1;j<=u;j++)cin>>a[i][j];
    }
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
     memset(truoc1,0,sizeof(truoc1));
     memset(truoc2,0,sizeof(truoc2));
    dfs(s);
    if(truoc1[t]==0)
    {
        cout<<"no path";
    }
    else
    {
        cout<<"DFS path: ";
        int u;
        cout<<t<<" ";
        u=t;
        while(u!=s)
        {
            u=truoc1[u];
            cout<<u<<" ";
        }
        cout<<endl;
        bfs(s);
    cout<<"BFS path: ";
    cout<<t<<" ";
        u=t;
        while(u!=s)
        {
            u=truoc2[u];
            cout<<u<<" ";
        }
    }
    
    cout<<endl;
}
