#include <iostream>
#include <string>
using namespace std;

int main(){
    float diemthi;
    string Khuvuc;
    cout<<"Vui long nhap diem thi: "<<endl;
    cin >>diemthi;
    cout<<"Vui long nhap khu vuc duoc uu tien(VD: KV1, KV2): "<<endl;
    cin>>Khuvuc;
    if (diemthi>=20){
        cout<<"Ban da trung tuyen!"<<endl;
        if(Khuvuc=="KV1"){
            diemthi+=0.75;
        }
        else{
            if(Khuvuc=="KV2"){
                diemthi+=0.5;
            }
            else{
                diemthi+=0;
            }
            }
        }
    else{
        cout<<"Rat tiec ban khong trung tuyen!"<<endl;
    }
    cout<<"Diem thi cua ban(diem cong neu co) la: "<<diemthi<<endl;
    return 0;
}