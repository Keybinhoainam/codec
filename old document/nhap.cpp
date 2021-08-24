#include <bits/stdc++.h>
using namespace std;
 
// Function that counts the minimum
// moves required to covert arr[] to brr[]
int minOperations(int arr1[], int arr2[], int i, int j,
                  int n, map<pair<int, int>, int> table)
{
     
    // Base Cases
    pair<int, int> key = {i, j};
     
    if (arr1 == arr2)
        return 0;
    if (i >= n || j >= n)
        return 0;
 
    // If the result is already stored
    if (table.find(key) != table.end())
        return table[key];
 
    // Compute the result
    if (arr1[i] < arr2[j])
        return 1 + minOperations(
            arr1, arr2, i + 1, j + 1, n, table);
 
    // Store the result
    table[key] = max(
        minOperations(arr1, arr2, i, j + 1, n, table),
        minOperations(arr1, arr2, i + 1, j, n, table));
 
    // Return the result
    return table[key];
}
 
// Function that counts the minimum
// moves required to sort the array
void minOperationsUtil(int arr[], int n)
{
    int brr[n];
 
    for(int i = 0; i < n; i++)
        brr[i] = arr[i];
 
    sort(brr, brr + n);
 
    if (brr == arr)
        cout << 0;
 
    else
    {
        map<pair<int, int>, int> table;
         
        cout << n - minOperations(
            brr, arr, 0, 0, n, table);
    }
}
 
// Driver code
int main()
{
    int arr[] = { 4, 1, 2, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
     
    minOperationsUtil(arr, n);
}
