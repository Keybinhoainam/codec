#include<bits/stdc++.h>
using namespace std;
long long n,x,fib[1000000],a[105];
int fibo(long long n)
{
		long long i=2;
		fib[0]=0;
		fib[1]=1;fib[2]=1;
		while(n>fib[i])i++;
		if(n==1||n==0)return 1;
		else
		{
			if(fib[i]==n)return 1;
			else return 0;
		}
}
int main()
{
	int T;
	cin>>T;
	fib[1]=1;fib[2]=1;
	for(int i=3;i<=20;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	while(T--)
	{
		cin>>n;
		long long t=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(fibo(x)==1)a[t++]=x;
		}
		for(int i=0;i<t;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

