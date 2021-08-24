#include<bits/stdc++.h>
using namespace std;
int kt(long long a[],long long n,long long k)
{
	long long tong=a[0];
	if(tong==k)return 1;
	int st=0;
	for(int i=1;i<n;i++)
	{
		tong+=a[i];
		
			while(st<i&&tong>k)
			{
				tong-=a[st];
				st++;
			}
			if(tong==k)return 1;
		
	}
	return 0;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,tong=0;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
//			tong+=a[i];
		}
		if(kt(a,n,k)==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

