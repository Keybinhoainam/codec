#include<bits/stdc++.h>
using namespace std;
int l,r,dem,c1[6];
map<int,bool>a;
void kt2(string s)
{
	for(int i=0;i<6;i++)
	{
		if(c1[i]==0)
		{
			c1[i]=1;
			string x=s+(char)(i+'0');
			int t=stoi(x);
			a[t]=1;
			if(t<r)kt2(x);
			c1[i]=0;
		}
	}
}
int kt()
{
	int dem=0;
	for(int i=l;i<=r;i++)a[i]=0;
	memset(c1,0,sizeof(c1));
	if(l==0)dem=1;
	for(int i=1;i<6;i++)
	{
		string s="";
		c1[i]=1;
		a[i]=1;
		s=s+(char)(i+'0');
		kt2(s);
		c1[i]=0;
	}
	for(int i=l;i<=r;i++)
	{
		if(a[i]==1)
		{
			dem++;
//			cout<<i<<endl;
		}
	}
	return dem;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>l>>r;
		cout<<kt()<<endl;
	}
}

