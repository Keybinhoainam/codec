#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{

		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

