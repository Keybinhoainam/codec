#include<bits/stdc++.h>
using namespace std;
long long getSum(long long BITree[], long long index)
{
    long long sum = 0;
    while (index > 0)
    {
	
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}
void updateBIT(long long BITree[], long long n, long long index, long long val)
{
    while (index <= n)
    {
       BITree[index] += val;
       index += index & (-index);
    }
}
long long getInvCount(long long arr[], long long n)
{
    long long invcount = 0;
    long long maxElement = 0;
    for (int i=0; i<n; i++)
        if (maxElement < arr[i])
            maxElement = arr[i];
    long long BIT[maxElement+1];
    for (int i=1; i<=maxElement; i++)
        BIT[i] = 0;
    for (int i=n-1; i>=0; i--)
    {
        invcount += getSum(BIT, arr[i]-1);
        updateBIT(BIT, maxElement, arr[i], 1);
    }
 
    return invcount;
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		long long  n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<getInvCount(a,n);
//	}
}
