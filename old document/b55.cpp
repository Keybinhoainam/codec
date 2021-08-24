#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		long long x,a[200];
  		memset(a,0,sizeof(a));
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
   			for(int j=i+1;j<s.length();j++)
   			{
   				if(s[i]==s[j])a[s[i]]=1;
			}
		}
		for(int i=0;i<s.length();i++)
		{
			if(a[s[i]]==0)cout<<s[i];
		}
		cout<<endl;
	}
}

