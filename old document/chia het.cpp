#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		int n,k;
		cin>>n>>k;
		int k1=0;
		for(int i=2;i<=n;i++)
		{
			int j=i;
			while(j%2==0)
			{
				k1++;
				j/=2;
			}
		}
		if(k1>=k)cout<<"Yes";
		else cout<<"No";
//	}
}

