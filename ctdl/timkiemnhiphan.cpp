#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long a[n],c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==k)
			{
				cout<<i+1<<" ";
				c=1;
			}
			
		}
//		long long *it=find(a,a+n,k);
		if(c==0)cout<<"NO";
//		else cout<<*it;
		cout<<endl;
		
	}
}

