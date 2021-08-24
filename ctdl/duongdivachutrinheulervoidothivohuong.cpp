#include<bits/stdc++.h>
using namespace std;
int v,e;
bool a[1005][1005];
int canhcau[1005];
int kt()
{
	int dem=0;
	for(int i=1;i<=v;i++)
	{
		if(canhcau[i]%2!=0)dem++;
	}
	if(dem==0)return 2;
	if(dem==2)return 1;
	return 0;
//	stack<int>tmp,kq;
//	int bd;
//	tmp.push(1);
//	while(!tmp.empty())
//	{
//		int t=tmp.top(),check=0;
//		for(int i=1;i<=v;i++)
//		{
//			if(a[t][i]==1)
//			{
//				check=1;
//				tmp.push(i);
//				a[t][i]=0;
//				a[i][t]=0;
//				break;
//			}
//		}
//		if(check==0)
//		{
//			int t=tmp.top();tmp.pop();
//			if(kq.empty())bd=t;
//			kq.push(t);
//		}
//	}
//	if(bd==kq.top())return 2;
//	else return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int u1,u2;
		memset(a,0,sizeof(a));
		memset(canhcau,0,sizeof(canhcau));
		cin>>v>>e;
		for(int i=0;i<e;i++)
		{
			cin>>u1>>u2;
			canhcau[u1]++;
			canhcau[u2]++;
			a[u1][u2]=1;
			a[u2][u1]=1;
		}
		cout<<kt()<<endl;
	}
}

