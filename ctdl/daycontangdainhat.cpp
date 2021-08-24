#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int kq=1;
	map<int,int>c;
	c[a[0]]=1;
	for(int i=1;i<n;i++)
	{
		c[a[i]]=1;
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])
			{
				c[a[i]]=max(c[a[j]]+1,c[a[i]]);
			}
		}
		kq=max(kq,c[a[i]]);
	}
		cout<<kq<<endl;
}

