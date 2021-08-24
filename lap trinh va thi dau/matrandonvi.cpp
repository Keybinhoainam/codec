#include<bits/stdc++.h>
using namespace std;
long long kt(char arr[][1000], 
                   int n, int m,int X) 
{ 
    int dp[n + 1][m + 1]; 
  
    memset(dp, 0, sizeof(dp)); 
    for (int i = 0; i < n; i++) { 
  
        for (int j = 0; j < m; j++) { 
  
            dp[i + 1][j + 1] = (int)(arr[i][j]-'0'); 
        } 
    }  
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= m; j++) { 
            dp[i][j] += dp[i - 1][j] 
                        + dp[i][j - 1] 
                        - dp[i - 1][j - 1]; 
        } 
    } 
    long long cnt = 0; 
  
    for (int i = 1; i <= n; i++) { 
  
        for (int j = 1; j <= m; j++) { 
            int lo = 1; 
            int hi = min(n - i, m - j) + 1; 
            bool found = false; 
  
            while (lo <= hi) { 
                int mid = (lo + hi) / 2; 
                int ni = i + mid - 1; 
                int nj = j + mid - 1; 
                int sum = dp[ni][nj] 
                          - dp[ni][j - 1] 
                          - dp[i - 1][nj] 
                          + dp[i - 1][j - 1]; 
  
                if (sum >= X) { 
                    if (sum == X) { 
                        found = true; 
                    } 
  
                    hi = mid - 1; 
                } 
                else {
                    lo = mid + 1; 
                } 
            } 
            if (found == true) { 
                cnt++; 
            } 
        } 
    } 
    return cnt; 
} 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		char a[n][1000];
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<kt(a,n,m,k)<<endl;
	}
}

