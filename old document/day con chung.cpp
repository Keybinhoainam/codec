#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,m,k,t=0;
		cin>>n>>m>>k;
		long long a[n],b[m],c[k],kq[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		for(int i=0;i<k;i++)cin>>c[i];
		int j2=0,j3=0;
		for(int i=0;i<n;i++)
		{
			while(j2<m&&b[j2]<a[i])j2++;
			while(j3<k&&c[j3]<a[i])j3++;
			if(j2==m||j3==k)break;
			else
			{
				if(b[j2]==a[i]&&c[j3]==a[i])
				{
					kq[t++]=a[i];
					j2++;
					j3++;
				}
			}
		}
		for(int i=0;i<t;i++)
		{
			cout<<kq[i]<<" ";
			
		}
		if(t==0)cout<<"NO";
		cout<<endl;
	}
}

