#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		int k,dem=0;
		cin>>s>>k;
		for(int i=0;i<=s.length()-k;i++)
		{
			int dem1=0,j;
			map <char,int> a;
			for(j=i;j<s.length();j++)
			{
				if(a[s[j]]==0)dem1++;
				a[s[j]]=1;
				if(dem1==k)dem++;
				if(dem1>k)break;
			}
		}
		cout<<dem<<endl;
	}
}
