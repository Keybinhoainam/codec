#include<bits/stdc++.h>
using namespace std;
struct job{
	int ma,de,pr;
};
job a[10000];
bool comp(job i,job j)
{
	return i.pr>j.pr;
//	return i.de<j.de;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i].ma>>a[i].de>>a[i].pr;
		}
		sort(a,a+n,comp);
		map<int,bool>b;
		int sum=0,dem=0;
		for(int i=0;i<n;i++)
		{
			int t=a[i].de;
			while(b[t]==1&&t>0)t--;
			if(t>0)
			{
				dem++;
				b[t]=1;
				sum+=a[i].pr;
			}
		}
		cout<<dem<<" "<<sum<<endl;
}
}

