#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
long long n,check,x,kq;
long long a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		kq=-1;
		check=0;
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(a[x]==1&&check==0)
			{
				check=1;
				kq=x;
			}
			a[x]=1;
		}
		cout<<kq<<endl;
		
		
	}
}

