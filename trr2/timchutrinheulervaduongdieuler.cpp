#include<bits/stdc++.h>
using namespace std;
class dothi{
    int n;
    int s;
    int a[100][100];
    public:
        void readdata();
        void euler_cycle();
};
void dothi::readdata()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
}
void dothi::euler_cycle()
{
    stack<int>tmp,kq;
    tmp.push(s);
    while(!tmp.empty())
    {
        int u=tmp.top(),check=0;
        for(int i=1;i<=n;i++)
        {
            if(a[u][i]==1)
            {
                check=1;
                tmp.push(i);
                a[u][i]=0;
                a[i][u]=0;
                break;
            }
        }
        if(check==0)
        {
            int t=tmp.top();tmp.pop();
            kq.push(t);
        }
        
    }
    while(!kq.empty())
    {
        cout<<kq.top()<<" ";kq.pop();
    }
}
int main()
{
    dothi a;
    a.readdata();
    a.euler_cycle();
}
