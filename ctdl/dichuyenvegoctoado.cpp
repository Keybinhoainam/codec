#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100][100];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
//		int n,m;
		cin>>n>>m;
		
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				a[i][j]=0;
				if(i==0||j==0)a[i][j]=1;
				else{
					a[i][j]+=a[i-1][j]+a[i][j-1];
				}
			}
		}
		
		cout<<a[n][m]<<endl;
	}
}

