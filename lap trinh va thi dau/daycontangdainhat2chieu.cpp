#include<bits/stdc++.h>
using namespace std;
vector<long long>c1(1000000);
bool cmp(long long i,long long j)
{
	return c1[i]>c1[j];
}
int main()
{
	
	long long n;
	cin>>n;
	vector<long long> x(n+5),y(n+5);
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	long long kq=1;
	vector<long long>c(n+5,1);
//	c[0]=1;
//cout<<c[1];
	for(int i=1;i<n;i++)
	{
		vector<long long> x1(n+5),y1(n+5);
		x1=x;y1=x;
		c1=c;
		sort(x1.begin(),x1.begin()+i,cmp);
		sort(y1.begin(),y1.begin()+i,cmp);
		for(int j=i-1;j>=0;j--)
		{
			if(x[i]>x[j]&&y[i]>y[j])
			{
				c[i]=max(c[i],c[j]+1);
				break;
			}
		}
		kq=max(kq,c[i]);
//		cout<<kq<<endl;
	}
	cout<<kq<<endl;

}

