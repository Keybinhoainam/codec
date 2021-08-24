#include<bits/stdc++.h>
using namespace std;
int n,k;
char x[100];
void kt(int i)
{
	for(char j=x[i-1]+1;j<'A'+n;j++)
	{
		x[i]=j;
		if(i==k)
		{
			for(int t=1;t<=k;t++)cout<<x[t];
			cout<<endl;
		}
		else kt(i+1);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		x[0]='A'-1;
		kt(1);
	}
}

