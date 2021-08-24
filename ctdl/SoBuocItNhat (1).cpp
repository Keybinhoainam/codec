// Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1000; 1≤A[i] ≤1000.
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n, 1);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max1 = -1;
    for(int i = 1; i < n; i++)
    {
        for(int j = i-1; j > -1; j--)
        {
            if(a[i] >= a[j])
            {
                b[i] = max(b[i], b[j]+1);
            }
            max1 = max(max1, b[i]);
        }
    }
    cout << n-max1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--)
//	{
//		long long n;
//	cin>>n;
//	long long a[n];
//	for(int i=0;i<n;i++)cin>>a[i];
//		long long kq=1;
//	map<long long,long long>c;
//	c[a[0]]=1;
//	for(int i=1;i<n;i++)
//	{
//		c[a[i]]=1;
//		for(int j=0;j<i;j++)
//		{
//			if(a[j]<=a[i])
//			{
//				c[a[i]]=max(c[a[j]]+1,c[a[i]]);
//			}
//		}
//		kq=max(kq,c[a[i]]);
//	}
//		cout<<n-kq<<endl;
//	}
//}
