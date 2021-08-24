#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		map<int,int>a;
		a[0]=1;
		a[1]=1;
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)for(int j=i*i;j<=n;j+=i)a[j]=1;
		}
		cout<<"1 ";
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0)cout<<i<<" ";
			else
			{
				int j=2;
				while(i%j!=0)j++;
				cout<<j<<" ";
			 } 
		}
		cout<<endl;
	}
}

