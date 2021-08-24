#include<bits/stdc++.h>
using namespace std;
long long kt(long long x,long long y)
{
	long long t=0,kc=y-x;
		if(kc==0)return 0;
		if(kc==1)return 1;
		else
		{
			while(t*(t+1)<kc)t++;
			if(t*(t+1)==kc)return t*2;
			else
			{
				t--;
				if(kc-t*(t+1)>t+1)return (t+1)*2;
				else return t*2+1;
			}
//			if(t*(t+1)-kc>t+1)cout<<(t+1)*2;
//			else 
//			{
//				if(t*(t+1)==kc)cout<<t*2;
//				else cout<<t*2+1;
//			}
		}
}
int main()
{
		long long x,y;
		while(cin>>x>>y)
		{
				cout<<kt(x,y)<<endl;
		}
		
//		cout<<kt(x,y)<<endl;
		
	
}

