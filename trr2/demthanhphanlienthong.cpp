#include<bits/stdc++.h>
using namespace std;
int u,dem;
 bool a[1000][1000],c[1000];
 void dfs(int i)
 {
     for(int j=1;j<=u;j++)
     {
         if(c[j]==0&&a[i][j]==1)
         {
             c[j]=1;
             dfs(j);
         }
     }
 }
 void kt()
 {
     for(int i=1;i<=u;i++)
     {
         if(c[i]==0)
         {
             c[i]=1;
             dem++;
             dfs(i);
         }
     }
 }
int main()
{
    cin>>u;
    for(int i=1;i<=u;i++)
    {
        for(int j=1;j<=u;j++)cin>>a[i][j];
    }
    memset(c,0,sizeof(c));
    dem=0;
    kt();
    cout<<dem<<endl;
}
