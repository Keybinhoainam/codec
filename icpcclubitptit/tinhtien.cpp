#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,n,s;
		cin>>a>>b>>n>>s;
		int i=0,gt=0;
		while(i<=a&&gt<=s)
		{
			i++;
			gt=i*n;
			
		}
		i--;
		if(i*n+b>=s)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

