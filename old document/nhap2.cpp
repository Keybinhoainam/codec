#include <bits/stdc++.h>
using namespace std;
 #define ll long long
// Function that counts the minimum
// moves required to covert arr[] to brr[]
ll minOperations(ll arr1[], ll arr2[], 
                  ll i, ll j,
                  ll n)
{
  // Base Case
  ll f = 0;
  for (int i = 0; i < n; i++) 
  {
    if (arr1[i] != arr2[i])
      f = 1;
    break;
  }
  if (f == 0)
    return 0;
 
  if (i >= n || j >= n)
    return 0;
 
  // If arr[i] < arr[j]
  if (arr1[i] < arr2[j])
 
    // Include the current element
    return 1 + minOperations(arr1, arr2, 
                             i + 1, j + 1, n);
 
  // Otherwise, excluding the current element
  return max(minOperations(arr1, arr2, 
                           i, j + 1, n),
             minOperations(arr1, arr2, 
                           i + 1, j, n));
}
 
// Function that counts the minimum
// moves required to sort the array
void minOperationsUtil(ll arr[], ll n)
{
  ll brr[n];
 
  for (int i = 0; i < n; i++)
    brr[i] = arr[i];
 
  sort(brr, brr + n);
  ll f = 0;
 
  // If both the arrays are equal
  for (int i = 0; i < n; i++) 
  {
    if (arr[i] != brr[i])
 
      // No moves required
      f = 1;
    break;
  }
   
  // Otherwise
  if (f == 1)
     
    // Print minimum 
    // operations required
    cout << (minOperations(arr, brr, 
                           0, 0, n));
  else
    cout << "0";
}
 
// Driver code
int main()
{
   ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
     
    minOperationsUtil(a, n);
}
 
