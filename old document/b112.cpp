#include<bits/stdc++.h>
using namespace std;
//long long c[1000005],c2[1000005],c3[1000005];
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[100][100],dem=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		int t[100],f1,f2=1;
		for(int i=0;i<n;i++)t[i]=0;
		for (int i=0; i<n; i++) 
    		sort(a[i], a[i] + n);
    	f1=1;
		for(int i=0;i<n;i++)
		{
			f1=1;
			for(int j=1;j<n;j++)
			{
//				t=0;
				while(a[j][t[j]]<=a[0][i]&&t[j]<n)t[j]++;
				if(a[j][t[j]-1]!=a[0][i])f1=0;
//				if(f1==1)dem++;
				if(t[j]==n)
				{
					f2=0;
					break;
				}
			 
		  //  	if(f2==0)break;
			}
			if(f1==1)dem++;
			if(f2==0)break;
		}
		cout<<dem<<endl;	
	}
	return 0;
}
