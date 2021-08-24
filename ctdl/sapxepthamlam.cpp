#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int vt=(n%2!=0)?n/2:n/2-1;
		int t=(n%2!=0)?0:1,check=1,i;
		for(i=vt;i>=0;i--)
		{
			if((a[i]==b[i]&&a[i+t]==b[i+t])||(a[i]==b[i+t]&&a[i+t]==b[i]))
			{
				t+=2;
			}
			else
			{
				check=0;
				break;
			}
		}
		if(check==0)cout<<"No";
		else cout<<"Yes";
		cout<<endl;
	}
}

