#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s1,s2,s3;
		long long i=0,check=1,t2;
		cin>>s1>>s2;
		map<char,int> a,b,c;
		for(i=0;i<s2.length();i++)a[s2[i]]++;
		for(i=0;i<s1.length();i++)c[s1[i]]++;
		for(i=0;i<s2.length();i++)
		{
			if(a[s2[i]]>c[s2[i]])check=0;
		}
		int vtb=0,len=s1.length();
		for(i=0;i<s1.length();i++)
		{
			t2=s2.length();
			b=a;
			int j=i;
			while(a[s1[i]]==0&&i<s1.length())i++;
			for(j=i;j<s1.length();j++)
			{
				if(b[s1[j]]>0)
				{
					t2--;
					b[s1[j]]--;
				}
				if(t2==0&&j-i+1<len)
				{
					len=j-i+1;
					vtb=i;
					break;
				}
				else
				{
					if(t2==0)break;
				}
			}
		}
		s3=s1.substr(vtb,len);
		if(check==1)cout<<s3;
		else cout<<-1;
		cout<<endl;
	}
}

