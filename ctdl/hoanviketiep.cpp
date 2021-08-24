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
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int i=n-1;
		while(i>0&&a[i]<a[i-1])i--;
		if(i==0)
		{
			for(int j=1;j<=n;j++)cout<<j<<" ";
		}
		else
		{
			int min1=a[i],vtm=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<min1&&a[j]>a[i-1])
				{
					min1=a[j];
					vtm=j;
				}
			}
			swap(a[i-1],a[vtm]);
			sort(a+i,a+n);
			for(int j=0;j<n;j++)cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}

