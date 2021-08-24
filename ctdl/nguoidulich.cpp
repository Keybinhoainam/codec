#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100],c1[100],somin1,fopt,x[100];
int chiphi;
void kt(int tp,int dem)
{
	for(int i=2;i<=n;i++)
	{
		
		if(c1[i]==0)
		{
			c1[i]=1;
			chiphi+=a[tp][i];
			if(dem==n-1)
			{
				fopt=min(fopt,chiphi+a[i][1]);
			}
			else{
				if(chiphi+somin1*(n-dem)<fopt)kt(i,dem+1);
			}
			c1[i]=0;
			chiphi-=a[tp][i];
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(i!=j)somin1=min(a[i][j],somin1);
		}
	}
	memset(c1,0,sizeof(c1));
	c1[1]=1;
	fopt=INT_MAX;
	kt(1,1);
	cout<<fopt<<endl;
}

