#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a,m;
		cin>>a>>m;
		long long x=0;
		for(x=0;x<=1005;x++)
		{
			if(a==0)
			{
				cout<<-1;
				break;
			}
			if((a%m*x%m)%m==1)
			{
				cout<<x;
				break;
			}
		}
		if(x>1005)cout<<-1;
		cout<<endl;
	}
}

