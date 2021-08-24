#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		int a[n],b[n],u1[n][n],u2[n][n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			u1[i][i]=a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			u2[i][i]=b[i];
		}
		long long kq=0;
		for(int i=0;i<n-1;i++)
		{
			if(u1[i][i]==u2[i][i]&&kq<1)kq=1;
			for(int j=i+1;j<n;j++)
			{
				u1[i][j]=u1[i][j-1]+a[j];
				u2[i][j]=u2[i][j-1]+b[j];
				if(u1[i][j]==u2[i][j]&&kq<j-i+1)kq=j-i+1;
			}
		}
		cout<<kq<<endl;
	}
}
