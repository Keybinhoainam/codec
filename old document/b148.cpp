#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 
int count(string s, int len) 
{ 
    int cur = 0, dig = 0; 
    int sum[MAX], dp[MAX][3]; 
  
    memset(sum, 0, sizeof(sum)); 
    memset(dp, 0, sizeof(dp)); 
  
    dp[0][0] = 1; 
  
    for (int i = 1; i <= len; i++) 
    { 
        dig = int(s[i-1])-48; 
        cur += dig; 
        cur %= 3; 
  
        sum[i] = cur;  
        dp[i][0] = dp[i-1][0]; 
        dp[i][1] = dp[i-1][1]; 
        dp[i][2] = dp[i-1][2]; 
  
        dp[i][sum[i]]++; 
    } 
  
    int ans = 0, dprev = 0, value = 0, dprev2 = 0; 
   
    for (int i = 1; i <= len; i++) 
    { 
        dig = int(s[i-1])-48; 
  
        if (dig == 8) 
            ans++; 
  
        if (i-2 >= 0) 
        { 
            dprev = int(s[i-2])-48;  
            value = dprev*10 + dig; 
  
            if ((value%8 == 0) && (value%3 != 0)) 
                ans++; 
        } 
   
        if (i-3 >= 0) 
        { 
            dprev2 = int(s[i-3])-48; 
            dprev  = int(s[i-2])-48;  
  
            value = dprev2*100 + dprev*10 + dig; 
  
            if (value%8 != 0) 
                continue; 
  
            ans += (i-2); 
            ans -= (dp[i-3][sum[i]]); 
        } 
    } 
  
    return ans; 
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int len =s.length();
		cout<<count(s,len)<<endl;
	}
}

