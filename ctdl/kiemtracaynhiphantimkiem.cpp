#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n],b[n],check=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])check=0;
		}
		cout<<check<<endl;
	}
}

