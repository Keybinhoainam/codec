#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,t;
		cin>>n;
		cout<<"1 2 ";
		for(long long i=3;i<=n;i++)
		{
			t=2;
			while(t<=i)
			{
				if(i%t==0)
				{
					cout<<t<<" ";
					break;
				}
				t++;
			}
		}
		cout<<endl;
	}
	
}

