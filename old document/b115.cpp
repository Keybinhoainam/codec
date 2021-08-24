#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length();
		map<char,int>a;
		int max1=0;
		for(int i=0;i<n;i++)
		{
			a[s[i]]++;
			if(max1<a[s[i]])max1=a[s[i]];
		}
		if(n-max1>max1-1)cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

