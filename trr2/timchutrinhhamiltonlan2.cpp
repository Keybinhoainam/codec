#include<bits/stdc++.h>
using namespace std;
class dothi{
	int n,a[100][100];
	public:
		int s,x[100];
		bool c[100];
		void readdata();
		void reset();
		void hmt(int k);
		
};
void dothi::readdata()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)cin>>a[i][j];
	}
}
void dothi::reset()
{
	for(int i=1;i<=n;i++)c[i]=0;
	c[s]=1;
	x[1]=s;
}
void dothi::hmt(int k)
{
	for(int i=1;i<=n;i++)
	{
		if(a[x[k-1]][i]==1)
		{
//			cout<<k<<" "<<n<<" "<<s<<" ";
			if(k==n+1&&i==s)
			{
				x[k]=s;
				for(int j=1;j<=k;j++)cout<<x[j]<<" ";
				cout<<endl;
			}
			else
			{
				if(c[i]==0)
				{
					c[i]=1;
					x[k]=i;
					hmt(k+1);
					c[i]=0;
				}
			}
		}
	}
}
int main()
{
	dothi a;
	a.readdata();
	a.reset();
	a.hmt(2);
}

