#include<bits/stdc++.h>
using namespace std;
long long n,ok=1,fib[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long i=2;
		cin>>n;
		fib[1]=1;fib[2]=1;
		while(n>fib[i])
		{
			i++;
			fib[i]=fib[i-1]+fib[i-2];
		}
		if(n==1||n==0)cout<<"YES";
		else
		{
			if(fib[i]==n)cout<<"YES";
		else cout<<"NO";
		}
		cout<<endl;
	}
}

