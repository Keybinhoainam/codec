#include<iostream>
using namespace std;
long long u(long long a,long long b)
{
	while(a!=b)
	{
		if(a>b)a-=b;
		else b-=a;
	}
	return a;
}

int main()
{
	int n;
	cin>>n;
	
    while(n)
    {
    	long long a,b;
    	cin>>a>>b;
    	long long p=u(a,b);
    	cout<<p<<" "<<(a*b)/p<<endl;
    	n--;
	}


}
