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
//		int a[n];
		vector<int>::iterator it;
		vector<int>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)
		{
			int j;
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					cout<<a[j]<<" ";
					break;
				}
			}
			if(j==n)cout<<-1<<" ";
		}
		cout<<endl;
	}
}

