#include<bits/stdc++.h>
using namespace std;
int kt()
{
	int n,s,m;
		cin>>n>>s>>m;
		if(n<m)return -1;
		int t=1,ng=2,mua=n,no=n-m;
		while(t<=s)
		{
			if(mua>=s*m)return t;
			if(ng<=7)
			{
				mua+=n;
				no+=(n-m);
				
			}
			if(ng==8)
			{
				if(no<m)return -1;
				no-=m;
				ng=1;
			}
			ng++;
			t++;
		}
		if(t>s)return -1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cout<<kt()<<endl;
	}
}

