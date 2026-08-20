#include <iostream>
using namespace std;

int main(){
    int start, end, step,c;
    double f;
    cout<<"moi nhap nhiet do bat dau "<<endl;
    cin>>start;
    cout<<"moi nhap nhiet do ket thuc "<<endl;
    cin>>end;
    cout<<"moi nhap buoc nhay "<<endl;
    cin>>step;

    for (c=start;c<=end;c+=step){
        f=(double)c*9/5+32;//ép kiểu biến c thành double 
    
    cout<<c<<" do C = "<<f<<" do F "<<endl;
    }
    return 0;
}