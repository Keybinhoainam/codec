#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a1[n],a2[n],x[n][n],y[n][n];
		for(int i=0;i<n;i++)
		{
			cin>>a1[i];
			x[i][i]=a1[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>a2[i];
			y[i][i]=a2[i];
		}
		int kq=0;
		for(int i=0;i<n;i++)
		{
			if(x[i][i]==y[i][i]&&kq<1)kq=1;
			for(int j=i+1;j<n;j++)
			{
				x[i][j]=x[i][j-1]+a1[j];
				y[i][j]=y[i][j-1]+a2[j];
				if(x[i][j]==y[i][j]&&kq<j-i+1)kq=j-i+1;
			}
		}
		cout<<kq<<endl;
	}
}

