#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 100; 
  
// function to individually sort 
// each row in increasing order 
void sortRows(int mat[100][100], int n) 
{ 
    for (int i=0; i<n; i++) 
        sort(mat[i], mat[i] + n); 
} 
  
// function to find all the common elements 
void findAndPrintCommonElements(int mat[][MAX], int n) 
{ 
    // sort rows individually 
    sortRows(mat, n); 
  
    // current column index of each row is stored 
    // from where the element is being searched in 
    // that row 
    long long dem=0;
    int curr_index[n]; 
    memset(curr_index, 0, sizeof(curr_index)); 
    int f = 0; 
  
    for (; curr_index[0]<n; curr_index[0]++) 
    { 
        // value present at the current column index 
        // of 1st row 
        int value = mat[0][curr_index[0]]; 
  
        bool present = true; 
  
        // 'value' is being searched in all the 
        // subsequent rows 
        for (int i=1; i<n; i++) 
        { 
            // iterate through all the elements of 
            // the row from its current column index 
            // till an element greater than the 'value' 
            // is found or the end of the row is 
            // encountered 
            while (curr_index[i] < n && mat[i][curr_index[i]] <= value) 
                curr_index[i]++; 
  
            // if the element was not present at the column 
            // before to the 'curr_index' of the row 
            if (mat[i][curr_index[i]-1] != value) 
                present = false; 
  
            // if all elements of the row have 
            // been traversed 
            if (curr_index[i] == n) 
            { 
                f = 1; 
                break; 
            } 
        } 
  
        // if the 'value' is common to all the rows 
        if (present) 
            dem++;
  
        // if any row have been completely traversed 
        // then no more common elements can be found 
        if (f == 1) 
            break; 
    } 
    cout<<dem<<endl;
} 
  
// Driver program to test above 
int main() 
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
		cin>>n;
		int a[100][100],dem=0;
//		long long m;
//		memset(c,0,sizeof(c));
//		map<long long ,long long> c;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
//			c[a[0][i]];
		}
    	findAndPrintCommonElements(a, n); 
    }
    return 0; 
} 
