#include <iostream>
#include <math.h>
using namespace std;
int gt(int x){
    if (x == 1){
        return 1;
    }
    else{
        return x*gt(x-1);
    }
}
float S1n(int x,int n){
    float result;
    result = 0;
    for (int i =1;i<=n;i++){
        result += (pow(x,i)/gt(i));
    }
    return result;
}
float S2n(int x,int n){
    float result;
    result = 1;
    for (int i =1;i<=n;i++){
        result += (pow(x,i*2)/gt(2*i));
    }
    return result;
}
float S3n(int x,int n){
    float result;
    result = 1;
    for (int i =0;i<=n;i++){
        result += (pow(x,2*i+1)/gt(2*i+1));
    }
    return result;
}

int main(){
    int x,n;
    cout<<"Nhap gia tri cua n:";cin>>n;
    cout<<"Nhap gia tri cua x:";cin>>x;
    cout<<"S1n = "<<S1n(x,n)<<endl;
    cout<<"S2n = "<<S2n(x,n)<<endl;
    cout<<"S3n = "<<S3n(x,n)<<endl;
    
}