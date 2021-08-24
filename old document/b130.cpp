#include<bits/stdc++.h>
using namespace std;
int nt(long long n)
{
	if(n<2)return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long l,r;
		cin>>l>>r;
		long long l1=(long long)ceil(sqrt(l)),r1=(long long)sqrt(r),dem=0;
		for(int i=l1;i<=r1;i++)
		{
			if(nt(i)==1)dem++;
		}
		cout<<dem<<endl;
	}
}

