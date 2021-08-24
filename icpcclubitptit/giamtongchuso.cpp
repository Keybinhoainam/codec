#include<bits/stdc++.h>
using namespace std;
void kt(int n[],int s,int i)
{
	if(s>=n[i])
	{
		s-=n[i];
		kt(n,s,i+1);
	}
	else 
	{
		if(i>0)kt(n,s+,)
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int s,n[20];
		cin>>n>>s;
		kt(n,s,0);
	}
}

