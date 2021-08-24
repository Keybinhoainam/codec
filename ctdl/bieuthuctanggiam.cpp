#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int so[n+5]={0};
		int j=0;
		while(s[j]=='D'&&j<n)j++;
		so[0]=1+j;
		for(int i=1;i<=n;i++)
		{
			if(s[i-1]=='D')
			{
				so[i]=so[i-1]-1;
			}
			else
			{
				int j=i;
				while(s[j]=='D'&&j<n)j++;
				so[i]=i+1+(j-i);
			}
		}
		for(int i=0;i<=n;i++)cout<<so[i];
		cout<<endl;
	}
}

