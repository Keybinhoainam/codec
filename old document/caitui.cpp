#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,v1;
		cin>>n>>v1;
		long long v[n+5],c[n+5],max1[n+5][v1+5];
		for(int i=1;i<=n;i++)cin>>v[i];
		for(int i=1;i<=n;i++)cin>>c[i];
		for(int l=0;l<=v1;l++)max1[0][l]=0;
		for(int i=1;i<=n;i++)
		{
			for(int l=0;l<=v1;l++)
			{
				max1[i][l]=max1[i-1][l];
				if(v[i]<=l&&max1[i-1][l-v[i]]+c[i]>max1[i][l])max1[i][l]=max1[i-1][l-v[i]]+c[i];
				
			}
		}
		cout<<max1[n][v1]<<endl;
	}
}

