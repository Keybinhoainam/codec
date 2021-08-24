#include<bits/stdc++.h>
using namespace std;
long long n,t=0,x,a[100000];
map<long long, long long> c1;
void nhap()
{
	t=0;
	cin>>n;
	map<long long, long long> c2;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(c2[x]==0)
			{
				a[t++]=x;
				c2[x]=1;
				c1[x]=1;
			}
			else 
			{
				c2[x]++;
				c1[x]++;
			}
		}
}
int comp(int i,int j)
{
	if(c1[i]==c1[j])return i<j;
	return c1[i]>c1[j];
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		nhap();
		stable_sort(a,a+t,comp);
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<c1[a[i]];j++)cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}

