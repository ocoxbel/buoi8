#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    while(b!=0){
        int du = a%b;
        a=b;
        b=du;
    }
    cout<<"vay uoc chung lon nhat la "<<a<<endl;
    return 0;
}