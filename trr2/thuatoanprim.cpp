#include<bits/stdc++.h>
using namespace std;
void kt()
{
	int n,s;
	cin>>n>>s;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)cin>>a[i][j];
	}
	int dh=0,vh[n+1],a1[100];
	memset(a1,0,sizeof(a1));
	a1[s]=1;
	int t=1,u,v;
	vh[t++]=s;
	map<int,pair<int,int>>canh;
	int socanh=0;
	for(int i=1;i<n;i++)
	{
		int min1=INT_MAX;
		for(int j=1;j<=n;j++)
		{
			if(a1[j]==0)
			{
//				a1[j]=1;
				
				for(int k=1;k<t;k++)
				{
					if(a[j][vh[k]]<min1&&a[j][vh[k]]>0)
					{
						min1=a[j][vh[k]];
						u=j;v=vh[k];
					}
				}
		
			}	
		}
		if(min1==INT_MAX)return;
		a1[u]=1;
		vh[t++]=u;
		canh[socanh].first=v;canh[socanh].second=u;
		socanh++;
		dh+=a[u][v];
	}
	cout<<"dh ="<<dh<<endl;
	for(int i=0;i<socanh;i++)
	{
		cout<<canh[i].first<<" "<<canh[i].second<<endl;
	}
}
int main()
{
	kt();
}

