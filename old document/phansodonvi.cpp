#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long tu,mau;
		cin>>tu>>mau;
		while(1)
		{
			if(mau%tu==0)
			{
				cout<<"1/"<<mau/tu<<endl;
				break;
			}
			else 
			{
				long long u=mau/tu+1;
				cout<<"1/"<<u<<" + ";
				tu=u*tu-mau;
				mau=u*mau;
			}
		}
	}
}
