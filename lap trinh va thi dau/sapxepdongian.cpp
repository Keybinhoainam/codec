#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll minOperations(ll arr1[], ll arr2[], ll i, ll j,
                  ll n, map<pair<ll, ll>, ll> table)
{
    pair<ll, ll> key = {i, j};
     
    if (arr1 == arr2)
        return 0;
    if (i > n || j > n)
        return 0;
    if (table.find(key) != table.end())
        return table[key];
    if (arr1[i] < arr2[j])
        return 1 + minOperations(
            arr1, arr2, i + 1, j + 1, n, table);
    table[key] = max(
        minOperations(arr1, arr2, i, j + 1, n, table),
        minOperations(arr1, arr2, i + 1, j, n, table));
    return table[key];
}
void minOperationsUtil(ll arr[], ll n)
{
    ll brr[n];
 
    for(int i = 0; i < n; i++)
        brr[i] = arr[i];
 
    sort(brr, brr + n);
 
    if (brr == arr)
        cout << 0;
 
    else
    {
        map<pair<ll, ll>, ll> table;
         
        cout << n - minOperations(
            brr, arr, 0, 0, n, table);
    }
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
     
    minOperationsUtil(a, n);
}
