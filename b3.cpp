#include <iostream>
using namespace std;
void nt(int n){
    if (n==1){
        cout<<"Day la so nguyen to";
    }
    else{
        int count ;
        count = 0;
        for(int i = 1;i<=n;i++){
            if (n%i == 0){
                count += 1;
            }
        }
        cout<<count;
        if (count == 2){
            cout<<"Day la so nguyen to";
        }
        else{
            cout<< "Day khong phai la so nguyen to.";
        }
    }
}
int main(){
    int n;
    cout<<"Nhap so ban muon kiem tra:";cin>>n;
    nt(n);
    
}