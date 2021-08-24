#include<bits/stdc++.h>
using namespace std;
int nt(int x)
{
	if(x==0||x==1)return 0;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)return 0;
	}
	return 1;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long l,r,dem=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			if(nt(i)==1)dem++;
		}
		cout<<dem<<endl;
	}
}

