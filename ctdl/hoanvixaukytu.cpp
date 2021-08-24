#include<bits/stdc++.h>
using namespace std;
void kt(int i,int n,string s,char s1[],map<char,bool> c)
{
	for(int j=0;j<++)
	{
		if(c[s[j]]==0)
		{
			s1[i]=s[j];
			if(i==n)
			{
				for(int k=1;k<=n;k++)cout<<s1[k];
				cout<<" ";
			}
			else
			{
				c[s[j]]=1;
				kt(i+1,n,s,s1,c);
				c[s[j]]=0;
			}
		}
		
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length();
		char s1[n+5];
		map<char,bool> c;
		kt(1,n,s,s1,c);
		cout<<endl;
	}
}

