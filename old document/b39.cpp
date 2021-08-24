#include<iostream>
using namespace std;
long long n,x,i,a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>x;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]==x)
			{
				cout<<1;
				break;
			}
		}
		if(i>n)cout<<-1;
		cout<<endl;
	}
}

