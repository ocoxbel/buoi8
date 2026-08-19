#include <iostream>
using namespace std;

int main(){
    int n, k,count=0;
    cout<<"moi nhap n : ";
    cin>>n;
    cout<<"moi nhap k(0-9): ";
    cin>>k;
    if (k<0||k>9){
        cout<<"moi nhap k lai ";
        cin>>k;
    }
    while(n>0){
        int digit= n%10;
        if(k==digit){
           count++; 
        }
        n=n/10;
    }
cout<<"tong so chu giong k la: "<<count<<endl;
return 0;
}