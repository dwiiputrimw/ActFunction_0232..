#include <iostream>
using namespace std;

float Luas, d1, d2;

void ProsedurInputData(){
    cout << "Masukkan Diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan Diagonal 2 : ";
    cin >> d2;
}

float ProsedurHitungLuasBerparameter(float d1, float d2) 
{
    return 0.5 * d1 * d2;
}

void ProsedurOutput (){
    cout << "Luas Belah Ketupat = " << ProsedurHitungLuasBerparameter(d1, d2);
}