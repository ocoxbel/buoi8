#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Nhap so n: ";
    cin>>n;
    long long giaithua=1;
    if (n<0||n>12){
        cout<<"Khong hop le"<<endl;
    }else{
    for(int i=1;i<=n;i++){
        giaithua= giaithua*i;
    }
}
    cout<<giaithua<<endl;
    return 0;
}