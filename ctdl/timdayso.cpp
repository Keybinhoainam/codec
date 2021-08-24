#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],min1=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		min1=min(a[i],min1);
	}
	for(int i=min1;i>=1;i--)
	{
		int tmp1=a[0]/i,j,tmp2=a[0]/tmp1;
		for(j=1;j<n;j++)
		{
			int tmp3=a[j]/i;
			int tmp4=a[j]/tmp3;
			if(tmp4!=tmp2)break;
		}
//		cout<<i<<" "<<j<<endl;
		if(j==n)
		{
//			cout<<i<<endl;
			int tong=0;
			for(int j=0;j<n;j++)
			{
				int tmp3=a[j]/i;
//				int tmp4=a[j]/tmp3;
				while(tmp3>=1&&a[j]/tmp3==i)tmp3--;
				tmp3++;
				tong+=(int)tmp3;
			}
			cout<<tong<<endl;break;
		}
	}
}

