#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	long long max1=INT_MIN;
	max1=max(max1,a[0]*a[1]*a[2]);
	max1=max(max1,a[n-3]*a[n-1]*a[n-2]);
	max1=max(max1,a[0]*a[1]*a[n-1]);
	max1=max(max1,a[0]*a[n-1]*a[n-2]);
	max1=max(max1,a[0]*a[1]);
	max1=max(max1,a[n-1]*a[n-2]);
	max1=max(max1,a[0]*a[n-1]);
	cout<<max1<<endl;
}

