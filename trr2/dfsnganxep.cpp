#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
map<int,bool>c;
void kt(int t)
{
    c[t]=1;
    stack<int>s;
    cout<<t<<" ";
    s.push(t);
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[u][i]==1&&c[i]==0)
            {
                cout<<i<<" ";
                c[i]=1;
                s.push(u);
                s.push(i);
                break;
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
    kt(1);
}
