#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t=1;
	for(int i=1;i<=n*3;i++)
	{
		for(int j=1;j<=4*n;j++)
		{
			if(i==1&&j>=n+1&&j<=3*n)
			{
				cout<<"*";
			}
			else
			{
				if(i>1&&i<=n&&(j==n+1-(i-1)||j==3*n+(i-1)))
				{
					cout<<"*";
				}
				else
				{
					if(i==n+1)
					{
						cout<<"*";
					}
					else
					{
						if(i>n+1&&(j==1+t||j==4*n-t))
						{
							cout<<"*";	
							if(j==4*n-t)t++;	
						}
						else cout<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
}

