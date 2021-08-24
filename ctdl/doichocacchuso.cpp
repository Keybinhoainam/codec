#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long k;
		cin>>k;
		char s[100];
		cin>>s;
		long long n=strlen(s),dem=0;
		for(int i=0;i<n-1;i++)
		{
			if(dem<k)
			{
				int max1=s[i],vt=i;
				
				for(int j=i+1;j<n;j++)
				{
					if(max1<=s[j])
					{
						max1=s[j];
						vt=j;
					}
				}
				if(vt!=i&&max1>s[i])
				{
					dem++;
					swap(s[i],s[vt]);
				}
			}
		}
		cout<<s<<endl;
	}
}
