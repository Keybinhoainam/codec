#include<bits/stdc++.h>
using namespace std;
string kq[1000],s;
char x[1000];
int n,dem;
void kt(int truoc,int t)
{
	for(int i=truoc+1;i<n;i++)
	{
		x[t]=s[i];
		for(int j=0;j<=t;j++)cout<<x[j];
		cout<<" ";
		if(t<n)kt(i,t+1);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>s;
		dem=0;
		kt(-1,0);
		
		cout<<endl;
	}
}

