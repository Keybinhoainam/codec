#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,max1=0,i=2;
		cin>>n;
		while(n>1)
		{
			if(n%i==0)
			{
				max1=max(max1,i);
				n/=i;
			}
			else i++;
		}
		cout<<max1<<endl;
	}
}

