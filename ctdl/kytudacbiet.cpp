#include<bits/stdc++.h>
using namespace std;
string s;
long long ns;
void kt(long long k,long long n)
{
	if(k==0)
	{
		cout<<s[n-1]<<endl;
		return;	
	}
	long long tmp=pow(2,k-1)*ns;
	if(n>tmp)
	{
		if(n-tmp==1)kt(k-1,tmp);
		else kt(k-1,n-tmp-1);
	}
	else kt(k-1,n);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>s>>n;
		ns=s.length();
		long long k=0;
		while(pow(2,k)*ns<n)
		{
			k++;
		}
		kt(k,n);
	}
}

