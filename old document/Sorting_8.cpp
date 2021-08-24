#include<bits/stdc++.h>
using namespace std;
int Dem(int a,int b[],int m,int dso[])
{
	if(a==0)return 0;
	if(a==1)return dso[0];
	int *it=upper_bound(b,b+m,a);
	int dem=(b+m)-it;
	dem+=dso[0]+dso[1];
	if(a==2)dem=dem-dso[3]-dso[4];
	if(a==3)dem+=dso[2];
	return dem; 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		
		int n,m;
		cin>>n>>m;
		int a[n],b[m],dso[5];
		for(int i=0;i<5;i++)dso[i]=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			if(b[i]<5)dso[b[i]]++;
		}
		sort(b,b+m);
		int kq=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>0)kq+=Dem(a[i],b,m,dso);
		}
		cout<<kq<<endl;
	}
}

