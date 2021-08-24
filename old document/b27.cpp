#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
long long a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,x;
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>0)a[x]=1;
		}
		for(int i=1;i<100000;i++)
		{
			if(a[i]==0)
			{
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
}

