#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long n=s.length();
		vector<long long>a;
		for(int i=0;i<n;i++)
		{
			int t=s[i]-'0';
			a.push_back(t);
		}
		long long kq=a[0];
		map<long long,long long>b;
		b[0]=a[0];
		for(int i=1;i<n;i++)
		{
			b[i]=(i+1)*a[i]+b[i-1]*10;
			kq+=b[i];
		}
		cout<<kq<<endl;
	}
}

