#include<bits/stdc++.h>
using namespace std;
void swap(int mat[15][15], int row1, int row2, 
          int col,int R,int C) 
{ 
    for (int i = 0; i < col; i++) 
    { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 
int kq(int mat[15][15],int R,int C) 
{ 
    int rank = C; 
  
    for (int row = 0; row < rank; row++) 
    { 
        if (mat[row][row]) 
        { 
           for (int col = 0; col < R; col++) 
           { 
               if (col != row) 
               { 
                 double mult = (double)mat[col][row] / 
                                       mat[row][row]; 
                 for (int i = 0; i < rank; i++) 
                   mat[col][i] -= mult * mat[row][i]; 
              } 
           } 
        } 
        else
        { 
            bool reduce = true; 
            for (int i = row + 1; i < R;  i++) 
            { 
                if (mat[i][row]) 
                { 
                    swap(mat, row, i, rank,R,C); 
                    reduce = false; 
                    break ; 
                } 
            } 
            if (reduce) 
            {
                rank--; 
                for (int i = 0; i < R; i ++) 
                    mat[i][row] = mat[i][rank]; 
            } 
            row--; 
        } 
    } 
    return rank; 
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[15][15];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<kq(a,n,m)<<endl;
	}
}

