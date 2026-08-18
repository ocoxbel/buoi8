#include<iostream>
using namespace std;

int main(){
int n, chuso, dem=0, max=0;
cout<<"Moi ban nhap so n ";
cin>>n;
while (n>0){
    chuso=n%10; // thuc hien len dem
    dem++;
    if(chuso>max){
        max=chuso;
    }
    n=n/10; //bo chu so vua dem
}
cout<<"So luong cac so la: "<<dem<<endl;
cout<<"So lon nhat trong so do la: "<<max<<endl;
return 0;
}