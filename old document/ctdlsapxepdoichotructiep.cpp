#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
//	}
	long long n;
	cin>>n;
	long long a[n],min1;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
//		min1=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				swap(a[j],a[i]);
			}
		}
//		swap(a[i],a[min1]);
		cout<<"Buoc "<<i+1<<": ";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

