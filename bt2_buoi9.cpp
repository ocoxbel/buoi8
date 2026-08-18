#include<iostream>
using namespace std;

int main(){
int n, dao=0, sbd;
cout<<"Moi ban nhap so n ";
cin>>n;
sbd=n;
while (n>0){
dao=dao*10+n%10;
n=n/10;
}
if(dao==sbd){
cout<<"Day la so doi xung"<<endl;
}else{
    cout<<"day kh phai la so doi xung"<<endl;
}


return 0;
}