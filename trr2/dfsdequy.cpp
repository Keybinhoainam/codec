//Chuong trinh C++ duyet cac dinh cua do thi (vo huong, co huong) su dung phuong phap DFS de quy

//Ham de quy DFS(u) duyet de quy do thi bat dau tu dinh u

#include <iostream>

#include <stack>

#include <fstream>

#include <string>

#define MAX 100

using namespace std;

//Mo hinh hoa moi do thi la mot doi tuong (gom du lieu va cac phuong thuc kem theo) -> Khai bao lop do thi.

class Dothi{

    int     n;                      //Tap dinh cua do thi

    int     A[MAX][MAX];            //Ma tran ke

    public:

    int     s;                      //Dinh bat dau duyet

    bool    chuaxet[MAX];           //Mang danh dau trang thai da duyet, chua duyet

    void    set();                  //Ham khoi tao cac bien

    void    readdata();             //Ham doc du lieu tu ban phim

    //void    startingvertex();     //Ham nhap tu ban phim dinh bat dau duyet

    void    RecursiveDFS(int u);    //Ham duyet DFS de quy tu dinh u

};

//Xay dung ham khoi tao

void Dothi::set(){

    for(int i=1; i<=n; i++) chuaxet[i]=true;

}

//Ham doc du lieu tu ban phim

void Dothi::readdata(){

    //cout << "\nNhap so dinh cua do thi: ";

    cin >> n;

    //cout << "\nSo dinh cua do thi la n = " << n;

    //cout << "\nNhap ma tran ke:\n";

    for(int i=1; i<=n; i++)

        for(int j=1; j<=n; j++) cin >> A[i][j];

    //cout << "\nMa tran ke cua do thi la: ";

    //for(int i=1; i<=n; i++){

    //    cout << "\n";

    //    for(int j=1; j<=n; j++) cout << A[i][j] << "   ";

    //}

}

//Ham duyet DFS de quy tu dinh u=1

void Dothi::RecursiveDFS(int u){

    chuaxet[u]=false;

    cout << u << "   ";

    for(int i=1; i<=n; i++)

        if((A[u][i]==1)&&(chuaxet[i]==true)) RecursiveDFS(i);

    return;

}

//Ham main

int main(){

    Dothi       G;

    //cout << "\nNhap du lieu:";

    G.readdata();

    G.set();

    //cout << "\nDuyet do thi su dung ham DFS de quy, duyet tu dinh 1:";

    G.RecursiveDFS(1);

    //cout << "\nProperly terminated.";

    return 0;

}
