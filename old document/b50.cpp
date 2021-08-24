#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long k,t,dem=0;
		long long a[200];
		memset(a,0,sizeof(a));
		cin>>k;
		for(int i=0;i<s.length();i++)
		{
			t=(long long)s[i];
			if(a[t]==0)
			{
				a[t]=1;
				dem++;
			}
		}
		if(26-dem<=k&&s.length()>=26)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

