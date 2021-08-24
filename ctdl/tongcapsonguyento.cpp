#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		map<long long,bool>snt;
		snt[0]=1;snt[1]=1;
//		int b[n];
		long long  i,ok=0;
		for(i=2;i<=n;i++)
		{
			if(snt[i]==0)
			{
				
				if(i>=n/2&&snt[n-i]==0)
				{
					ok=1;
					break;
				}
//				b[t++]=i;
				if(i*i<=n)
				{
					for(long long j=i*i;j<=n;j+=i)
				{
					snt[j]=1;
				}
				}
			}
		}
		if(ok==1)cout<<n-i<<" "<<i;
		else cout<<-1;
		cout<<endl;
		
	}
}

