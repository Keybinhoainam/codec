#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,x;
		cin>>n>>x;
		int t,ok=-1;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			if(t==x&&ok==-1)
			{
				ok=i+1;
//				ok=1;
			}
		}
		cout<<ok<<endl;
	}
	
}

