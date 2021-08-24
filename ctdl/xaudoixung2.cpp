#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char a[100];
		cin>>a;
		int n=strlen(a);
		char b[100];
		int kq[n+5][n+5];
		memset(kq,0,sizeof(kq));
		for(int i=0;i<n;i++)
		{
			b[i]=a[n-1-i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i-1]==b[j-1])
				{
					kq[i][j]=kq[i-1][j-1]+1;
				}
				else
				{
					kq[i][j]=max(kq[i-1][j],kq[i][j-1]);
				}
			}
		}
		cout<<n-kq[n][n]<<endl;
	}
}
