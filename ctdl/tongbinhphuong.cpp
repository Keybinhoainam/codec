#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n+5];
//		memset(a,0,sizeof(a));
		for(int i=0;i<=n;i++)
		{
			a[i]=i;
		}
//		a[1]=1;a[0]=0;
		for(int i=2;i<=n;i++)
		{
			int j=sqrt(i);
			while(j>=1)
			{
				int t=i-pow(j,2);
				a[i]=min(a[t]+1,a[i]);
				j--;
			}
		}
		cout<<a[n]<<endl;
	}
}

