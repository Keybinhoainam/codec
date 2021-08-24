#include<bits/stdc++.h>
using namespace std;
int tinh(int x,map<int,int>c,int b[],int m)
{
	if(x==0)return 0;
	if(x==1)return c[0];
	int *it=upper_bound(b,b+m,x);
	int kq= (b+m)-it;
	kq+=(c[0]+c[1]);
	if(x==2)
	{
		kq-=(c[3]+c[4]);
	}
	if(x==3)kq+=c[2];
	return kq;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		map<int,int>c;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			if(b[i]<=4)c[b[i]]++;
		}
		sort(b,b+m);
		long long kq=0;
		for(int i=0;i<n;i++)
		{
			kq+=tinh(a[i],c,b,m);
		}
		cout<<kq<<endl;
	}
}

