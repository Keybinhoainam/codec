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
		int t=f[0],i=1,dem=1;
		while(i<n)
		{
			if(s[i]>=t)
			{
				dem++;
				t=f[i];
			}
			i++;
		}
		cout<<dem<<endl;
	}
}

