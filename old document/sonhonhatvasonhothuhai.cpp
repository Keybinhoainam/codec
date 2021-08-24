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
		long long a[n],t=1;
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		
		while(a[t]==a[0]&&t<n)t++;
		if(t==n)cout<<-1;
		else cout<<a[0]<<" "<<a[t];
		cout<<endl;
	}
}

