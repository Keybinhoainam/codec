#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10 
  
// Function to find circular convolution 
void kt(int x[][300], int h[][3], int n, int m) 
{ 
    int row_vec[MAX_SIZE], col_vec[MAX_SIZE]; 
    int out[MAX_SIZE] = { 0 }; 
    int circular_shift_mat[MAX_SIZE][MAX_SIZE]; 
  
    // Finding the maximum size between the 
    // two input sequence sizes 
    int maxSize = n > m ? n : m; 
  
    // Copying elements of x to row_vec and padding 
    // zeros if size of x < maxSize 
    for (int i = 0; i < maxSize; i++) { 
        if (i >= n) { 
            row_vec[i] = 0; 
        } 
        else { 
            row_vec[i] = x[i]; 
        } 
    } 
  
    // Copying elements of h to col_vec and padding 
    // zeros if size of h is less than maxSize 
    for (int i = 0; i < maxSize; i++) { 
        if (i >= m) { 
            col_vec[i] = 0; 
        } 
        else { 
            col_vec[i] = h[i]; 
        } 
    } 
  
    // Generating 2D matrix of 
    // circularly shifted elements 
    int k = 0, d = 0; 
  
    for (int i = 0; i < maxSize; i++) { 
        int curIndex = k - d; 
        for (int j = 0; j < maxSize; j++) { 
            circular_shift_mat[j][i] = row_vec 
                [curIndex % maxSize]; 
            curIndex++; 
        } 
        k = maxSize; 
        d++; 
    } 
  
    // Computing result by matrix 
    // multiplication and printing results 
    long long tong=0;
    for (int i = 0; i < maxSize; i++) { 
        for (int j = 0; j < maxSize; j++) { 
  
            out[i] += circular_shift_mat[i][j] 
                      * col_vec[j]; 
        } 
        tong+=out[i];
//        cout << out[i] << " "; 
    } 
    cout<<tong<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int x[300][300],h[3][3];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>x[i][j];
			}
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>h[i][j];
			}
		}
		kt(x,h,n,m);
	}
}

