#include<bits/stdc++.h>
using namespace std;
int n,m,a[500][500];
int x[]={-1,-1,-1, 0, 0, 1, 1, 1};
int y[]={-1, 0, 1,-1, 1,-1, 0, 1};
int c[1000][1000];
void kt(int i,int j)
{
	c[i][j]=1;
	int x1,y1;
	for(int z=0;z<8;z++)
	{
		x1=i+x[z];y1=j+y[z];
		if(x1>=0&&x1<n&&y1>=0&&y1<m&&c[x1][y1]==0&&a[x1][y1])
		{
			kt(x1,y1);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int kq=0;
		for(int i=0;i<n;i++)memset(c[i],0,sizeof(c[i]));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==1&&c[i][j]==0)
				{
					kq++;
					kt(i,j);
				}
			}
		}
		cout<<kq<<endl;
	}
}

