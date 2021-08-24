#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long f1=0,f2=1,ft;
		while(f1+f2<n)
		{
			ft=f1;
			f1=f2;
			f2=ft+f2;
		}
		if(n==0||n==1||f1+f2==n)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

