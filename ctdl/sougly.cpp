#include<bits/stdc++.h>
using namespace std;
long long kt(int n)
{
	set<long long>a;
	a.insert(1);
	n--;
	while(n)
	{
		long long t=*a.begin();
		a.erase(t);
		a.insert(t*2);
		a.insert(t*3);
		a.insert(t*5);
		n--;
	}
	return *a.begin();
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		cout<<kt(n)<<endl;
	}
}

