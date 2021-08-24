#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,a[105],dem=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]+a[j]==k)dem++;
			}
		}
		cout<<dem<<endl;
	}
}

