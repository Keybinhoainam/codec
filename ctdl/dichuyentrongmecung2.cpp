#include<bits/stdc++.h>
using namespace std;
char x[100000];
int c[100][100];
int n,check;
void kt(int a[100][100],int t,int i,int j)
{
	for(int k=1;k<=4;k++)
	{
		switch(k)
		{
			case 1:
				if(c[i+1][j]==0&&a[i+1][j]==1)
				{
					c[i+1][j]=1;
					x[t]='D';
					if(i+1==n&&j==n)
					{
						for(int i=0;i<=t;i++)
						{
							cout<<x[i];
						}
						cout<<" ";
						check=1;
					}
					else
					{
						kt(a,t+1,i+1,j);
					}
					c[i+1][j]=0;
				}
				break;
			case 2:
				if(c[i][j+1]==0&&a[i][j+1]==1)
				{
					c[i][j+1]=1;
					x[t]='R';
					if(i==n&&j+1==n)
					{
						for(int i=0;i<=t;i++)
						{
							cout<<x[i];
						}
						cout<<" ";
						check=1;
					}
					else
					{
						kt(a,t+1,i,j+1);
					}
					c[i][j+1]=0;
				}
				break;
			case 3:
				if(c[i][j-1]==0&&a[i][j-1]==1)
				{
					c[i][j-1]=1;
					x[t]='L';
					if(i==n&&j-1==n)
					{
						for(int i=0;i<=t;i++)
						{
							cout<<x[i];
						}
						cout<<" ";
						check=1;
					}
					else
					{
						kt(a,t+1,i,j-1);
					}
					c[i][j-1]=0;
				}
				break;
			case 4:
				if(c[i-1][j]==0&&a[i-1][j]==1)
				{
					c[i-1][j]=1;
					x[t]='U';
					if(i-1==n&&j==n)
					{
						for(int i=0;i<=t;i++)
						{
							cout<<x[i];
						}
						cout<<" ";
						check=1;
					}
					else
					{
						kt(a,t+1,i-1,j);
					}
					c[i-1][j]=0;
				}
				break;
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
//		int n;
		cin>>n;
		int a[100][100];
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=n+1;j++)
			{
				if(i==0||j==0||i==n+1||j==n+1)
				{
					a[i][j]=0;
					c[i][j]=0;
				}
				else 
				{
					cin>>a[i][j];
					c[i][j]=0;
				}
			}
		}
		c[1][1]=1;
		check=0;
		kt(a,0,1,1);
		if(check==0)cout<<-1;
		cout<<endl;
	}
}

