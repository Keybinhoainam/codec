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
		int a[n],x,pos;
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<"Buoc "<<0<<": "<<a[0]<<endl;
		for(int i=1;i<n;i++)
		{
			x=a[i];
			pos=i-1;
			while(pos>=0&&a[pos]>x)
			{
				a[pos+1]=a[pos];
				pos--;
			}
			a[pos+1]=x;
			cout<<"Buoc "<<i<<": ";
			for(int j=0;j<=i;j++)cout<<a[j]<<" ";
			cout<<endl;
		}
//	}
}

