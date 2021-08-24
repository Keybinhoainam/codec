#include<iostream>
using namespace std;
int main()
{
	int a,b,c[10005];
	cin>>a>>b;
	int max1=max(a,b),min1=min(a,b);
	c[0]=1;c[1]=1;
	for(int i=2;i*i<=max1;i++)
	{
		if(c[i]==0)
		{
			for(int j=i*i;j<=max1;j+=i)c[j]=1;
		}
	}
	for(int i=min1+1;i<max1;i++)
	{
		if(c[i]==0)cout<<i<<" ";
	}

}

