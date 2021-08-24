#include<iostream>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		int n,i=2;cin>>n;
		while(n>1)
		{
			int dem=0;
			if(n%i==0)
			{
				int k=i;
				while(n%i==0)
				{
					n/=i;
					dem++;
				}
				cout<<i<<" "<<dem<<" ";
				
			}
			else i++;
		}
		cout<<endl;
	}
}

