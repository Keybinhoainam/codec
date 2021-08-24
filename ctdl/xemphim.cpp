#include<bits/stdc++.h>
using namespace std;
void kt()
{
	long long n,c;
	cin>>c>>n;
	long long w[n+5];
	for(int i=1;i<=n;i++)cin>>w[i];
	long long max1[n+2][c+5];
	for(int l=0;l<=c;l++)max1[0][l]=0;
	for(int i=1;i<=n;i++)
	{
		for(int l=0;l<=c;l++)
		{
			max1[i][l]=max1[i-1][l];
			if(w[i]<=l&&max1[i-1][l-w[i]]+w[i]>max1[i][l])max1[i][l]=max1[i-1][l-w[i]]+w[i];
			
		}
	}
	cout<<max1[n][c]<<endl;
}
int main()
{
	kt();
}

