#include <bits/stdc++.h> 
using namespace std; 
  
bool kt(long long A[], long long arr_size,long long sum) 
{ 
    int l, r;
    sort(A, A + arr_size);
    for (int i = 0; i < arr_size - 2; i++) { 
    	l=i+1;
        r = arr_size - 1;
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                return true; 
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else
                r--; 
        } 
    } 
    return false; 
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,x,t=0;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		if(kt(a,n,k)==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

