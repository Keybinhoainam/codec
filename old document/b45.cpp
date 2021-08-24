#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,a[1005],dem=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==k)dem++;
		}
		if(dem==0)cout<<-1;
		else cout<<dem;
		cout<<endl;
	}
}

