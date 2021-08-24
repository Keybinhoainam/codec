#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	long long kq=INT_MIN;
	kq=max(kq,a[0]*a[1]*a[n-1]);
	kq=max(kq,a[n-3]*a[n-2]*a[n-1]);
	kq=max(kq,a[n-2]*a[n-1]);
	kq=max(kq,a[0]*a[1]);
	cout<<kq<<endl;
}

