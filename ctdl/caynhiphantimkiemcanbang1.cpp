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
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int x=(n%2==0)?n/2:n/2+1;
		cout<<a[x-1]<<endl;
	}
}

