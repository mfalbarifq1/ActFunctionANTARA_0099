#include<iostream>
using namespace std;

float CekStatusBerparameter(float x, float y){
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