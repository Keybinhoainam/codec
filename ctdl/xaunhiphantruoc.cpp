#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s[1000];
		cin>>s;
		int n=strlen(s),i=n-1;
		while(i>=0&&s[i]=='0')i--;
		if(i<0)
		{
			for(int j=0;j<n;j++)cout<<'1';
		}
		else
		{
			for(int j=0;j<n;j++)
			{
				if(j<i)cout<<s[j];
				if(j==i)cout<<0;
				if(j>i)cout<<1;
			}
		}
		cout<<endl;
	}
}

