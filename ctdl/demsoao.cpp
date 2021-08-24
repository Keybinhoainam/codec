#include<bits/stdc++.h>
using namespace std;
int n,m;
int X[]={-1,-1,-1, 0, 0, 1, 1, 1};
int Y[]={-1, 0, 1,-1, 1,-1, 0, 1};
bool check[100][100];
string s[100];
void kt(int i,int j)
{
	for(int k=0;k<8;k++)
	{
		if(i+X[k]<n&&i+X[k]>=0&&j+Y[k]<m&&j+Y[k]>=0&&!check[i+X[k]][j+Y[k]]&&s[i+X[k]][j+Y[k]]=='W')
		{
			check[i+X[k]][j+Y[k]]=1;
			kt(i+X[k],j+Y[k]);			
		}
	}
}
int main()
{
	cin>>n>>m;
//	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		memset(check[i],0,sizeof(check[i]));
	}
	int dem=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(check[i][j]==0&&s[i][j]=='W')
			{
				dem++;
				check[i][j]=1;
				kt(i,j);
			}
		}
	}
	cout<<dem<<endl;
}

