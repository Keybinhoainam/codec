#include<bits/stdc++.h>
using namespace std;
int x[100],a[100][100];
bool c[100];
int v,u0;
void kt(int k)
{
    for(int i=1;i<=v;i++)
    {
        if(a[x[k-1]][i]==1)
        {
//            cout<<"ok  ";
            if(k==v+1)
            {
                x[k]=i;
                for(int j=1;j<=k;j++)cout<<x[j]<<" ";
                cout<<endl;
            }
            else
            {
                if(c[i]==0)
                {
                    c[i]=1;
                    x[k]=i;
                    kt(k+1);
                    c[i]=0;
                    
                }
            }
        }
    }
}
int main()
{
    cin>>v>>u0;
    
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)cin>>a[i][j];
    }
    memset(c,0,sizeof(c));
    x[1]=u0;
    c[u0]=1;
    kt(2);
}
