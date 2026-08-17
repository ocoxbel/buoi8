#include <iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<"Gia tri lon nhat la: "<<max<<endl;
return 0;
}