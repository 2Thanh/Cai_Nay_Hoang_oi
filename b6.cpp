#include <iostream>
using namespace std;
void nhap_mang(int **a, int r , int c){
    for (int i = 0; i<r ;i++){
        for (int j = 0; j<c ;j++){
            cout<<"Nhap a["<<i<<"]["<<j<<"]:";cin>>a[i][j];
        }
    }
}
void xuat_mang(int **a, int r , int c){
    for (int i = 0; i<r ;i++){
        for (int j = 0; j<c ;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int **nhap_n(int &r , int &c){
    int **a;
    do{
        cout<<"Nhap s0 phan tu cua hang:";cin>>r;
        cout<<"Nhap s0 phan tu cua c0t:";cin>>c;
    }
    while(r<= 0 || c<=0 );
    a = new int*[r];

    for (int i =0 ; i < r ; i++){
        a[i] = new int[c];
    }
    nhap_mang(a,r,c);
    return a;
}
int main(){
    int ra,ca,rb,cb;
    int **a,**b;
    cout<<"Nhap mang a:"<<endl;
    a = nhap_n(ra,ca);
    cout<<"Nhap mang b:"<<endl;
    b = nhap_n(rb,cb);
    if (ra == rb && ca == cb){
        cout<<"Mt tong la:"<<"\n";
        for (int i = 0; i<ra ;i++){
            for (int j = 0; j<ca ;j++){
                cout << a[i][j] +b[i][j]<<"\t";
            }
            cout<<"\n";
        }
        cout<<"Mt hieu la:"<<"\n";
        
        for (int i = 0; i<ra ;i++){
            for (int j = 0; j<ca ;j++){
                cout << a[i][j] -b[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Hai mt nay khong cong duoc voi nhau.";
    }

}