#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long m=8*n*n,a[m];
		a[0]=m+2*n;
		long long i=1,dau=1,step=2;
		while(i<m)
		{
			for(int j=0;j<step;j++)
			{
				a[i]=a[i-1]-4*n*dau;
				i++;
				if(i>=m)break;
			}
			if(i>=m)break;
			for(int j=0;j<step;j++)
			{
				a[i]=a[i-1]+dau;
				i++;
			}
			dau*=-1;
			step+=2;
		}
		for(int j=0;j<i;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
		for(int j=0;j<i;j++)
		{
			cout<<m*2+1-a[j]<<" ";
		}
		cout<<endl;
	}
}
