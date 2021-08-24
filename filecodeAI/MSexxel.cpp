#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="";
	map<int,char> a;
	for(int i=1;i<=26;i++)
	{
		char t='A'+i-1;
		a[i]=t;
	}
	while(n>0)
	{
		int t=n%26;
		if(t==0)
		{
			t=26;
			s=a[t]+s;
			n=n/26-1;
		}
		else
		{
			s=a[t]+s;
			n=n/26;
		}
	}
//	s=a[n]+s;
	cout<<s;
	
}
