#include <iostream>
using namespace std;
int main() {
    int tuoi;
    cout <<"Vui long nhap tuoi cua ban:";
    cin >>tuoi;
    double thunhap;
    cout <<"Thu nhap hang thang cua ban la:";
    cin>>thunhap;
    bool dudieukienvay =(tuoi>=18 && thunhap>=5000000);
    if(dudieukienvay){
        cout <<"1.ban du dieu kien vay tien!"<<endl;
    }else{
        cout <<"0.ban khong du dieu kien vay tien!"<<endl;
    }
    return 0;
    }