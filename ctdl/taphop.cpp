#include<bits/stdc++.h>
using namespace std;
int n,k,s,dem,tong=0;
void kt(int t,int i)
{
	for(int j=i;j<=n;j++)
	{
		tong+=j;
		if(t==k&&tong==s)dem++;
		else
		{
			if(t<k)kt(t+1,j+1);
		}
		tong-=j;
	}
}
int main()
{
	while(1)
	{
		cin>>n>>k>>s;
		if(n==0&&k==0&&s==0)break;
		dem=0;
		tong=0;
		kt(1,1);
		cout<<dem<<endl;
	}
	
	
}

