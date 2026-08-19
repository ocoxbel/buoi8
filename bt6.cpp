#include <iostream>
using namespace std;

int main(){
    int n, i,sum=0;
    cout<<"moi nhap so n: ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"day la so hoan hao";

    }else{
        cout<<"day khong phai la so hoan hao";
    }
    return 0;
}