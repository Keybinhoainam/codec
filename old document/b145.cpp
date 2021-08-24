#include<bits/stdc++.h>
using namespace std;
char a[20][20];
int getMin(int x, int y) { return (x < y) ? x : y; }
int test(int n)
{
	int r[n][n],c[n][n],max1=0;
	memset(r,0,sizeof(r));
	memset(c,0,sizeof(c));
//	r[0][0]=c[0][0]=(a[0][0]=='X');
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='O')
			{
				r[i][j]=0;
				c[i][j]=0;
			}
			else
			{
				r[i][j]=(j==0)?1:r[i][j-1]+1;
				c[i][j]=(i==0)?1:c[i-1][j]+1;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				int min1=getMin(r[i][j],c[i][j]);
				while(min1>max1)
				{
					if(r[i-min1+1][j]>=min1&&c[i][j-min1+1]>=min1)
					{
						max1=min1;
					}
					min1--;
				}
			}
		}
	}
	return max1;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<test(n)<<endl;
	}
}

