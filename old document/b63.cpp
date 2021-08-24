#include<iostream>
#include<cmath>
using namespace std;
inline long long bcnn(long long a,long long b)
{
	long long a1=a,b1=b;
	while(a!=b)
	{
		if(a>b)a-=b;
		if(a<b)b-=a;
	}
	return b1*a1/a;
}
//inline long long power(long long a,long long b)
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long x,y,z,n,uoc,boi,i,xy1,xy2;
		cin>>x>>y>>z>>n;
		boi=bcnn(bcnn(x,y),z);
		i=pow(10,n-1)/boi;
		while((boi*i)<pow(10,n-1))i++;
		if(boi*i<=pow(10,n)-1)cout<<boi*i;
		else cout<<-1;
		cout<<endl;
		
	}
}

