#include<bits/stdc++.h>
using namespace std;
int somin(int n)
{
	int t,t1=0,t2=0;
	while(n>0)
	{
		t=n%10;
		if(t==6)t=5;
		t1=t*pow(10,t2)+t1;
		n/=10;
		t2++;
	}
	return t1;
}
int somax(int n)
{
	int t,t1=0,t2=0;
	while(n>0)
	{
		t=n%10;
		if(t==5)t=6;
		t1=t*pow(10,t2)+t1;
		n/=10;
		t2++;
	}
	return t1;
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		int a,b;
		cin>>a>>b;
		cout<<somin(a)+somin(b)<<" "<<somax(a)+somax(b)<<endl;
//	}
}

