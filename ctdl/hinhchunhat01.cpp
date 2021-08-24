#include<bits/stdc++.h>
using namespace std;
struct pack{
	int f, id;
};
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
	    int m, n; cin >> m >> n;
	    int res = 0;
	    vector<int> f(n, 0);
	    vector<int> l(n), r(n);
	    while (m--) {
	        // Ð?c d? li?u và c?p nh?t f
	        for (int j=0; j<n; j++) {
	            int a; cin >> a;
	            if (a == 0) f[j] = 0;
	            else f[j] += 1;
	        }
	
	        vector<pack> q;
	
	        // Tính l
	        for (int j=0; j<n; j++) {
	            while (!q.empty() && q.back().f >= f[j]) q.pop_back();
	
	            if (q.empty()) l[j] = -1;
	            else l[j] = q.back().id;
	
	            q.push_back({f[j], j});
	        }
	
	        // Tính r
	        q.clear();
	        for (int j=n-1; j>=0; j--) {
	            while (!q.empty() && q.back().f >= f[j]) q.pop_back();
	
	            if (q.empty()) r[j] = n;
	            else r[j] = q.back().id;
	
	            q.push_back({f[j], j});
	        }
	
	        for (int j=0; j<n; j++) {
	            res = max(res, f[j]*(r[j]-l[j]-1));
	        }
	    }
	    cout << res << endl;
	}
    return 0;
}
