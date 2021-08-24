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
		int a[n],tong=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)tong++;
		}
		cout<<tong<<endl;
	}
}

