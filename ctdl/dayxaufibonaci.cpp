#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i;
		cin>>n>>i;
		long long a[n+5];
		a[1]=1;a[2]=1;
		for(int i=3;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		while(n>2)
		{
			if(i<=a[n-2])n-=2;
			else 
			{
				i-=a[n-2];
				n-=1;
			}
		}
		if(n==1)cout<<"A";
		else cout<<"B";
		cout<<endl;
	}
}

