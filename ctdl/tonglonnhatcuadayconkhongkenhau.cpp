#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n+5],kq=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			kq=max(kq,a[i]);
		}
		a[0]=0;
		long long t[n+5];
		t[1]=a[1];t[2]=a[2];t[0]=a[0];
//		cout<<a[1]<<" "<<a[2]<<" "<<kq<<endl;
		for(int i=3;i<=n;i++)
		{
			t[i]=max(t[i-2],t[i-3])+a[i];
			kq=max(kq,t[i]);
		}
		cout<<kq<<endl;
	}
}

