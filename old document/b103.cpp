#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5],b[n+5],vtl=0,vtr=n-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		while(a[vtl]==b[vtl])vtl++;
		while(a[vtr]==b[vtr])vtr--;
		cout<<vtl+1<<" "<<vtr+1<<endl;
	}
}

