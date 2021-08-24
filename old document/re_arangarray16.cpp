#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		char s[100000];
		cin>>s;
		long long n=strlen(s),i=n-1;
		while(s[i]>=s[i-1]&&i>0)i--;
		if(i==0)cout<<-1;
		else
		{
			long long max1=s[i],vtmax=i;
			for(int j=i+1;j<n;j++)
			{
				if(max1<s[j]&&s[j]<s[i-1])
				{
					max1=s[j];
					vtmax=j;
				}
			}
			swap(s[i-1],s[vtmax]);
			cout<<s;
		}
		cout<<endl;
		
	}
}

