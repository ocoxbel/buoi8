#include <iostream>
using namespace std;

int main(){
    float diem;
    cout<<"Vui long nhap diem"<<endl;
    cin>>diem;
    if(diem>10||diem<0){
        cout<<"Diem khong hop le!"<<endl;
    }else if(diem>=8){
        cout<<"Hoc luc: Gioi"<<endl;
    }else if(diem>=6.5){
        cout<<"Hoc Luc: Kha"<<endl;
    }else if (diem>=5){
        cout<<"Hoc Luc: Trung Binh"<<endl;
    }
    else{
        cout<<"Hoc luc: Yeu"<<endl;
    }
return 0;
}