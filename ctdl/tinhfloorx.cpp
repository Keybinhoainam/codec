#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n>>x;
		long long kq=-1,x1,check=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>x1;
			if(x1<=x)
			{
				kq=i;
				check=1;
			}
//			cout<<kq<<" ";
		}
		if(check==1)cout<<kq+1<<endl;
		else cout<<-1<<endl;
//cout<<endl;
	}
}

