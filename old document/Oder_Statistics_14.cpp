#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		map<int,int>b,c;
		int a[n],ab[n],t=0;
		for(int i=0;i<n;i++)
		{
			cin>>ab[i];
			if(b[ab[i]]==0)
			{
				a[t++]=ab[i];
				b[ab[i]]=1;
			}
		}
		sort(a,a+t);
		for(int i=0;i<t-1;i++)
		{
			c[a[i]]=a[i+1];
		}
		for(int i=0;i<n;i++)
		{
			if(ab[i]==a[t-1])cout<<"_ ";
			else
			{
				cout<<c[ab[i]]<<" ";
			}
		}
		cout<<endl;
	}
}

