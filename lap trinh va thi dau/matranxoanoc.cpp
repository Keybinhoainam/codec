#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		int n;
		cin>>n;
		int a[100][100]={0};
		int svt=(n%2==0)?n/2:(n+1)/2;
		int vtd=0,vtc=n-1,t=1;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		while(svt-->0)
		{
//			cout<<t;
			for(int i=vtd;i<=vtc;i++)a[vtd][i]=t++;
			for(int i=vtd+1;i<=vtc;i++)a[i][vtc]=t++;
			for(int i=vtc-1;i>=vtd;i--)a[vtc][i]=t++;
			for(int i=vtc-1;i>vtd;i--)a[i][vtd]=t++;
			vtd++;vtc--;
//			for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}
//		cout<<endl<<endl;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
}

