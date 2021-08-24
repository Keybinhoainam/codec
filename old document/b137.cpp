#include<bits/stdc++.h>
using namespace std;
bool londan(int i,int j)
{
	return i>j;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],b[n];
		map<long long,long long>ch;
		int t=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(ch[a[i]]==0)
			{
				ch[a[i]]=1;
				b[t++]=a[i];
			}
		}
		sort(b,b+t,londan);
		map<long long,long long> c;
		for(int i=1;i<t;i++)
		{
			c[b[i]]=b[i-1];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[0])cout<<"_ ";
			else
			{
				cout<<c[a[i]]<<" ";
			}
		}
		cout<<endl;
		
	}
}

