#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[25];
		for(int i=1;i<=n;i++)
		{
			a[i]=0;
			cout<<0;
		}
		cout<<" ";
		int ok=1;
		while(ok)
		{
			int i=n;
			while(i>0&&a[i]!=0)
			{
				a[i]=0;
				i--;
			}
			if(i>0)
			{
				a[i]=1;
				for(int j=1;j<=n;j++)
				{
					cout<<a[j];
				}
				cout<<" ";
			}
			else ok=0;
		}
		cout<<endl;
	}
}

