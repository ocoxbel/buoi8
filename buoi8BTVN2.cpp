#include <iostream>
using namespace std;

int main(){
     int n, tong= 0, dem= 0,i;
    cout<<"Nhap so n: ";
    cin>>n;
    for(i=1; i<=n;i++){
        if(i%3!=0){
           
            continue;
           }
 cout<<i<<endl;
    
    tong= tong+i;
    dem=dem+1;
        }
        cout<<"So luong cac so chia het cho 3 la: "<<dem<<endl;
        cout<<"Tong cac so chia het cho 3 la: "<<tong<<endl;
        return 0;
    }