#include<bits/stdc++.h>
using namespace std;
int tim100(string s,long long &vtb,long long &vte,long long vtbs)
{
	for(long long i=vtbs;i<=s.length()-3;i++)
	{
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0')
		{
			vtb=i;
			vte=i+2;
			return 1;
		}
	}
	return 0;
}
void check(string s,long long &vtb,long long &vte)
{
	long long vtb1=vtb,vte1=vte;
	long long n=s.length();
	while(true)
	{
		long long vtb2=vtb,vte2=vte;
		if(s[vtb-1]=='0'&&s[vtb-2]=='0'&&s[vtb-3]=='1'&&vtb>=3)vtb=vtb-3;
		if(s[vte+1]=='1'&&s[vte+2]=='0'&&s[vte+3]=='0'&&vte<=n-4)vte=vte+3;
		if(s[vtb-1]=='0'&&s[vtb-2]=='1'&&s[vte+1]=='0'&&vtb>=2&&vte<=n-2)
		{	
			vtb-=2;
			vte+=1;
		}
		if(s[vtb-1]=='1'&&s[vte+1]=='0'&&s[vte+2]=='0'&&vtb>=1&&vte<=n-3)
		{
			vtb-=1;
			vte+=2;
		}
		if(vtb==vtb2&&vte==vte2)break;
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s,s2;
		cin>>s;
		long long vtb,vte,n=s.length(),i=0,len=0;
		if(tim100(s,vtb,vte,i)==1)
		{
				check(s,vtb,vte);
				if(vte-vtb+1>len)len=vte-vtb+1;
				i=vte+1;
		}
		while(i<s.length())
		{
			long long vte2=vte,vtb2=vtb;
			if(tim100(s,vtb,vte,i)==1)
			{
				check(s,vtb,vte);
				if(vte2+1==vtb)vtb=vtb2;
				if(vte-vtb+1>len)len=vte-vtb+1;
				i=vte+1;
			}
			else break;
		}
		cout<<len<<endl;
	}
}

