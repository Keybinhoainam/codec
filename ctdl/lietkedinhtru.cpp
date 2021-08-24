#include<bits/stdc++.h>
using namespace std;
class dothi{
	int v,e;
	bool a[1005][1005],a1[1005];
	public:
		void readdata();
		void reset1();
		void reset2();
		void dfs(int);
		void kt();		
};
void dothi::reset1()
{
	memset(a,0,sizeof(a));
}
void dothi::reset2()
{
	memset(a1,0,sizeof(a1));
//	dem=1;
}
void dothi::readdata(){
	cin>>v>>e;
	int u1,u2;
	for(int i=0;i<e;i++)
	{
		cin>>u1>>u2;
		a[u1][u2]=1;
		a[u2][u1]=1;
	}
}
void dothi::dfs(int u)
{
//	cout<<"Ok";
	a1[u]=1;
	for(int i=1;i<=v;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
//			dem++;
			dfs(i);
		}
	}
}
void dothi::kt()
{
//	int dem1=0;
//	dothi a;
//	reset1();
//	readdata();
//	cout<<a[1][2]<<endl;
	for(int i=1;i<=v;i++)
	{
		reset2();
		a1[i]=1;
//		cout<<a1[2]<<"   ";
		int t=(i<v)?i+1:i-1;
		dfs(t);
//		cout<<a1[2];
//		cout<<a1[2]<<"       ";
		for(int j=1;j<=v;j++)
		{
			if(a1[j]==0)
			{
				cout<<i<<" ";
				break;
			}
		}
		a1[i]=0;
//		cout<<endl;
	}
	cout<<endl;
//	cout<<dem1<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		dothi dt;
		dt.reset1();
		dt.readdata();
		dt.kt();
	}
}

