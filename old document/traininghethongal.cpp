#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		double u;
		cin>>n>>u;
		double a[n+5],tong=u,x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tong+=a[i];
		}
		double tb=tong/n;
		if(tb<1.000000)
		{
			sort(a,a+n);
			int i=n-1;
//			tong-=u;
			x=(tong)/n;
			while(x<a[i]&&i>=0)
			{
				tong-=a[i];
//				m--;
				x=(tong)/i;
				i--;
			}
			for(int j=0;j<=i;j++)a[j]=x;
			double kq=1.000000;
		for(int i=0;i<n;i++)
		{
			kq*=a[i];
		}
		cout<<setprecision(6)<<fixed<<kq<<endl;
		}
		else
		{
			tb=1.000000;
				cout<<setprecision(6)<<fixed<<tb<<endl;
		}
	}
}

