// Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤104; 1≤ k ≤103; 1≤ A[i] ≤105.
#include <bits/stdc++.h>

using namespace std;

bool cmp (pair<long long, long long> a, pair<long long, long long> b)
{
	return a.second > b.second;
}

void Sort(map<long long, long long> value)
{
	vector<pair<long long, long>> arrPair;
	for(auto it : value)
	{
		arrPair.push_back(it); 
	}  
	stable_sort(arrPair.begin(), arrPair.end(), cmp);
	for(auto it : arrPair)
	{
		for(long long i = 0; i < it.second; i++)
		{
			cout << it.first << " ";
		}
	}
}

void solve()
{
    int n;
    cin >> n;
    long long key[n];
    map<long long, long long> value;
    for(int i = 0; i < n; i++)
    {
        cin >> key[i];
        value[key[i]]++;
    }
    // for(auto it : value)
	// {
	// 	cout << it.first << " " << it.second << endl; 
	// } 
    Sort(value); 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}