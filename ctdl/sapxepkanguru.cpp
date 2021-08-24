#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,dem=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		map<int,int>c;
		int j=n/2;
		for(int i=0;i<n;i++)
		{
			while(j<n)
			{
				int check=0;
				if(a[j]>=2*a[i]&&c[j]==0)
				{
					c[j]=1;
					dem++;
					break;
				}
				j++;
			}
		}
		cout<<n-dem<<endl;
	}
}

