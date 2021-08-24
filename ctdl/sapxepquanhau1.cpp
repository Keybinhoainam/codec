#include<bits/stdc++.h>
using namespace std;
long long dem,n;
map<int,bool>c,x,ng;
void kt(int i)
{
	for(int j=0;j<n;j++)
	{
		if(c[j]==0&&x[i+n-j]==0&&ng[i+j]==0)
		{
			c[j]=1;
			x[i+n-j]=1;ng[i+j]=1;
			if(i==n)dem++;
			else
			{
				kt(i+1);
			}
			c[j]=0;
			x[i+n-j]=0;ng[i+j]=0;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		dem=0;
		kt(1);
		cout<<dem<<endl;
	}
}

