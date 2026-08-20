#include <iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"moi nhap n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"tong cac so chan tu 1 den "<<n<<" la "<<sum<<endl;
    return 0;
}