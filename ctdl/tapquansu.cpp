#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],dem=0;
		map<int,int>c;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
			c[a[i]]=1;
		}
		int i;
		for( i=k-1;i>=0;i--)
		{
			if(a[i]<=n-k+i)
			{
				a[i]++;
				dem++;
				for(int j=i+1;j<k;j++)
				{
					if(c[a[i]+j-i]==0)dem++;
				
				}
				break;
			}
		}
		if(i==-1)dem=k;
		cout<<dem<<endl;
	}
}

