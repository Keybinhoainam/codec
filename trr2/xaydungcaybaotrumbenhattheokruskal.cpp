#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100],a1[100];
pair<pair<int,int>,int>t[100];
bool cmp(pair<pair<int,int>,int>i,pair<pair<int,int>,int>j)
{
	if(i.second==j.second)return i.first.first<j.first.first;
	return i.second<j.second;
}
void dfs(int u)
{
	for(int i=1;i<=n;i++)
	{
		if(a[u][i]==1&&a1[i]==0)
		{
			a1[i]=1;
			a[u][i]=0;
			a[i][u]=0;
			dfs(i);
			a[u][i]=1;
			a[i][u]=1;
		}
	}
}
int main()
{
	int dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        	cin>>a[i][j];
        	if(j>i&&a[i][j]>0)
        	{
        		t[dem].second=a[i][j];
        		t[dem].first.first=i;
        		t[dem].first.second=j;
        		dem++;
			}
		}
    }
    vector<pair<pair<int,int>,int>>vt;
    for(int i=0;i<dem;i++)
    {
    	vt.push_back(t[i]);
	}
	sort(vt.begin(),vt.end(),cmp);
//	for(int i=0;i<dem;i++)
//    {
//    	cout<<vt[i].second<<" "<<vt[i].first.first<<" "<<vt[i].first.second;
//    	cout<<endl;
//	}
	memset(a,0,sizeof(a));
	int socanh=0,tong=0;
	pair<int,int>kq[100];
	for(int i=0;i<dem&&socanh<n-1;i++)
	{
		memset(a1,0,sizeof(a1));
		a[vt[i].first.first][vt[i].first.second]=1;
		a[vt[i].first.second][vt[i].first.first]=1;
		dfs(vt[i].first.first);
		if(a1[vt[i].first.first]==0)
		{
			kq[socanh].first=vt[i].first.first;
			kq[socanh].second=vt[i].first.second;
			tong+=vt[i].second;
			socanh++;
			
		}
		else
		{
			a[vt[i].first.first][vt[i].first.second]=0;
		a[vt[i].first.second][vt[i].first.first]=0;
		}
		
	}
	if(socanh==n-1)
	{
		cout<<"dH = "<<tong<<endl;
		for(int i=0;i<socanh;i++)
		{
			cout<<kq[i].first<<" "<<kq[i].second<<endl;
		}
	}
}
