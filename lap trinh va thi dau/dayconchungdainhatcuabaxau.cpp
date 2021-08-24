#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int nx,ny,nz;
		cin>>nx>>ny>>nz;
		string x,y,z;
		cin>>x>>y>>z;
		int a[nx+5][ny+5][nz+5];
		memset(a,0,sizeof(a));
		for(int i=1;i<=nx;i++)
		{
			for(int j=1;j<=ny;j++)
			{
				for(int k=1;k<=nz;k++)
				{
					if(x[i-1]==y[j-1]&&y[j-1]==z[k-1])
					{
						a[i][j][k]=a[i-1][j-1][k-1]+1;
					}
					else
					{
						a[i][j][k]=max(a[i-1][j][k],max(a[i][j-1][k],a[i][j][k-1]));
//						a[i][j][k]=max(a[i-1][j-1][k],max(a[i][j-1][k-1],a[i-1][j][k-1]));
					}
				}
			}
		}
		cout<<a[nx][ny][nz]<<endl;
	}
}

