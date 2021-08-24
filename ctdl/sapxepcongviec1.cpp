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
		int s[n],f[n];
		for(int i=0;i<n;i++)cin>>s[i];
		for(int i=0;i<n;i++)cin>>f[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(f[j]>f[j+1])
				{
					swap(f[j],f[j+1]);
					swap(s[j],s[j+1]);
				}
			}
		}
		long long i=1,dem=1,u1=f[0];
		while(i<n)
		{
			if(s[i]>u1)
			{
				u1=f[i];
				dem++;
			}
			i++;
		}
		cout<<dem<<endl;
		
}
}

