#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long s[n+5],tong=0;
		s[0]=1;
		for(int i=1;i<=n;i++)
		{
			s[i]=s[i-1]*i;
			tong+=s[i];
		}
		cout<<tong<<endl;
	
}

