#include<bits/stdc++.h>
using namespace std;
long long kt()
{
	long long n,s=6,m,s1;
		cin>>n>>s1>>m;
		while(s<=s1)
		{
			long long t;
		t=((s*m)%n==0)?(s*m)/n:(s*m)/n+1;
//		cout<<t%7<<" ";
		long long cn=(t/7);
		if((t+cn)%7==0)cn++;
//		if(t+cn<=s+1)return t+cn;
		if(t+cn>=s+1) return -1;
			s+=7;
		}
		long long t;
		t=((s1*m)%n==0)?(s1*m)/n:(s1*m)/n+1;
//		cout<<t%7<<" ";
		long long cn=(t/7);
		if((t+cn)%7==0)cn++;
		if(t+cn<s1+1)return t;
		else return -1;
		
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cout<<kt()<<endl;
	}
}

