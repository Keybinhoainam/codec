#include<bits/stdc++.h>
using namespace std;
double a[1000005];
bool comp(double i,double j)
{
	return i>j;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int  n,c,d;
		cin>>n>>c>>d;
//		double a[n+5];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n,comp);
		if(c>d)swap(c,d);
		double kq=0.000000;
		double tong1=0,tong2=0;
		for(int i=0;i<c;i++)tong1+=(a[i]);
		for(int i=c;i<d+c;i++)tong2+=(a[i]);
//		kq=tong1/c+tong2/d;
		kq=((double)tong1)/c+((double)tong2)/d;
		cout<<fixed<<setprecision(6)<<kq<<endl;
////cout<<tong1<<" "<<tong2<<endl;
		
		
	}
}

