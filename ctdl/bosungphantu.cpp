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
		long long a[n],dem=0;
		map<long long,bool>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(b[a[i]]==0)
			{
				dem++;
				b[a[i]]=1;
			}
		}
		sort(a,a+n);
		cout<<a[n-1]-a[0]+1-dem<<endl;
		
	}
}

