#include<bits/stdc++.h>
using namespace std;
long long c1[1000],c2[1000];
long long t[1000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>c1[i]>>c2[i];
			t[i]=1;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(c1[j+1]<c1[j])
				{
					swap(c1[j+1],c1[j]);
					swap(c2[j+1],c2[j]);
				}
			}
		}
		long long kq=1;
		t[0]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(c1[i]>c2[j])t[i]=max(t[i],t[j]+1);
			}
			kq=max(kq,t[i]);
		}
		cout<<kq<<endl;
	}
}

