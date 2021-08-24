#include<bits/stdc++.h>
using namespace std;
map<long long, long long> c1;
bool comp(long long i,long long j)
{
	if(c1[i]==c1[j]) return j>i;
	return c1[i]>c1[j];
	
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	long long n,t=0,x;
	t=0;
	cin>>n;
	long long a[n];
	map<long long, long long> c2;
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
			if(c2[a[i]]==0)
			{
				c2[a[i]]=1;
				c1[a[i]]=1;
			}
			else 
			{
				c2[x]++;
				c1[x]++;
			}
		}
		sort(a,a+n,comp);
		for(long long i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}

