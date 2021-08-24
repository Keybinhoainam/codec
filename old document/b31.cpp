#include<iostream>
using namespace std;
int a1[1005],a2[1005],n,t1[1005][1005],t2[1005][1005],kq;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a1[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>a2[i];
		}
		kq=0;
		for(int i=0;i<n;i++)
		{
			t1[i][i]=a1[i];t2[i][i]=a2[i];
			if(a1[i]==a2[i])kq=max(1,kq);
			for(int j=0;j<i;j++)
			{
				if(i>j)
				{
					t1[j][i]=t1[j][i-1]+a1[i];
					t2[j][i]=t2[j][i-1]+a2[i];
					if(t1[j][i]==t2[j][i])kq=max(kq,i-j+1);
				}
			}
		}
		cout<<kq<<endl;
	}
}

