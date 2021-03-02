//Program akan dibuat dalam bahasa pemrograman C++
#include <iostream>
using namespace std;

int main(){
    int x;
    int y;


    cout << "Program Pembagian\n\n";
    cout << "Nilai X = " ; 
    cin >> x ;
    cout << "\n";
    cout << "Nilai Y = " ;
    cin >> y ;
    cout << "\n";

    //Menerima input manual
    float z = x / y;
    
    cout << "Hasil Pembagian = " << z << "\n";
    return 0;
}
