#include<iostream>
using namespace std;

int panjang,lebar;
void input(){
    cout<<"masukkan panjang";
    cin>>panjang;
    cout<<"masukkan lebar";
    cin>>lebar;

}
int luaspersegi(int a,int b){
    return a*b;

}
int kelilingpersegi(int a, int b){
    return 2*(a+b);

}
void output(){
    cout<<"luasnya: "<<luaspersegi(panjang,lebar)<<endl;
}

int main(){
    input();
    output();
    cout<<"kelilingnya:" <<kelilingpersegi(panjang, lebar );
}