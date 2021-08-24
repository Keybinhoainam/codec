#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n, k, x, L, R;
	cin >> n;
	vector<int>A(n), B;
	for (int i = 0; i < n; i++) {
	cin >> A[i];
	}
	cin >> k >> x;
	vector<int>::iterator it,it1;
	it = lower_bound(A.begin(), A.end(), x);
	it1 = upper_bound(A.begin(), A.end(), x);
	L = it - A.begin();
	R = it1 - A.begin();
	if (A[L] == x && L >= 0) L--;
	while (k != 0) 
	{
		if (L >= 0) {
			B.push_back(A[L--]);
			k--;
		}
		if (R <= n - 1) {
		B.push_back(A[R++]);
		k--;
		}
		if (L < 0 && R > n - 1)break;
	}
	sort(B.begin(), B.end());
	for (int i = 0; i < B.size(); i++) {
	cout << B[i] << " ";}
	cout << endl;
}
}
