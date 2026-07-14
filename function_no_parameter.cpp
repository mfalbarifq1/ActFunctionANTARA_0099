#include<iostream>
using namespace std;

float HitungRerataBerparameter(float x, float y){
    return(x + y) / 2 ;
}
string CekStatusBerparameter(float a){
    if(a >= 60){
        return "lulus";
    }
    else{
        return"tidaklulus";
    }
}

int main(){
    float ujian1,ujian2;
    cout<<"masukkan nilai ujian 1 :";
    cin>>ujian1;
    cout<<"masukkan nilai ujian 2 :";
    cin>>ujian2;

    cout<<"status kelulusan:"<<CekStatusBerparameter(HitungRerataBerparameter(ujian1, ujian2));
    

}