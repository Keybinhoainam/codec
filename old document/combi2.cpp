#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long a[25];
void Try(int i)
{
	if(i==k+1)
	{
		for(int j=1;j<=k;j++)cout<<a[j];
		cout<<" ";
	}
	else 
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		Try(i+1);
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>k;
		a[0]=0;
		Try(1);
		cout<<endl;
	}
}

