#include<bits/stdc++.h>
using namespace std;
long long a[103][103],b[103][103];
inline void xoay(long long icd,long long icc,long long jcd,long long jcc)
{
	if(icc==icd||jcc==jcd)
	{
		if(icc==icd&&jcc!=jcd)
		{
			for(int j=jcd+1;j<=jcc;j++)a[icc][j]=b[icc][j-1];
		}
		if(jcc==jcd&&icc!=icd)
		{
			for(int i=icc-1;i>=icc;i--)a[i][jcc]=b[i+1][jcc];
		}
	}
	else
	{
		for(int j=jcd+1;j<=jcc;j++)a[icd][j]=b[icd][j-1];
		for(int i=icd+1;i<=icc;i++)a[i][jcc]=b[i-1][jcc];
		for(int j=jcc-1;j>=jcd;j--)a[icc][j]=b[icc][j+1];
		for(int i=icc-1;i>=icd;i--)a[i][jcd]=b[i+1][jcd];
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m,icc,icd,jcd,jcc;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		icc=n-1;icd=0;jcd=0;jcc=m-1;
		while(icc>=icd&&jcc>=jcd)
		{
			xoay(icd,icc,jcd,jcc);
			icd++;icc--;
			jcd++;jcc--;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

