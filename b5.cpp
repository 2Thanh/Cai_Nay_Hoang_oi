#include <iostream>
using namespace std;
void nhap_n(int &n){
    do{
        cout<<"Nhap so phan tu cua mang (>3):";cin>>n;
    }
    while(n<= 3 );
}
void nhap_mang(int *a, int n){
    for (int i = 0; i<n ;i++){
        cout<<"Nhap a["<<i<<"]=";cin>>a[i];
    }
}
void xuat_mang(int *a,int n){
    for (int i = 0; i<n ;i++){
        cout<<*(a+i)<<"\t";
    }

}
void xoa_mang(int *a,int n){
    int index;
    do{
        cout<<"Nhap vi tri phan tu ban muon xoa(0 - "<<n-1<<"):";cin>>index;
    }while(index > n-1 || n < 0);
    for (int i = index;i<n-1;i++){
        a[i] = a[i+1];
    }
    cout<<"Mang moi bay gio la\n";
    n -- ;
    xuat_mang(a,n);
}
int main(){
    int n;
    nhap_n(n);
    int *a = new int[n];
    nhap_mang(a,n);
    xuat_mang(a,n);
    xoa_mang(a,n);


}