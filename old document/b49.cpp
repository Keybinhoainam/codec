#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a[120][120],n,m,cot[105],hang[105];
		cin>>n>>m;
		memset(cot,0,sizeof(cot));
		memset(hang,0,sizeof(hang));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
				{
					cot[i]=1;
					hang[j]=1;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(cot[i]==1||hang[j]==1)cout<<1<<" ";
				else cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

