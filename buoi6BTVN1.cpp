#include <iostream>
using namespace std;

int main(){
    int nam;
    cout <<"Vui long nhap nam: "<<endl;
    cin >> nam;
    if (nam%4==0 && nam%100 !=0  || nam%400==0){
    cout<<nam<<" la nam nhuan!"<<endl;
    }
    else{
    cout<<nam<<" khong la nam nhuan!"<<endl;
    }
    return 0;
}
