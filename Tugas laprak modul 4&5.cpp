#include <iostream>
using namespace std;

int main (){

int umur, tinggi,tarif;

    cout << "Masukkan umur anak: "  ;
    cin >> umur;
    cout << "Masukkan tinggi anak: ";
    cin >> tinggi;

if (tinggi < 50 && umur < 5) {

        cout << "Inputan tinggi atau umur salah" << endl;

    }else if (umur < 5 ){
        cout << ("-1");

    } else if (umur > 12) {
        tarif = 100000;
        cout << "Tarif tiket: Rp" <<tarif<< endl;

    } else if (umur == 12 || (tinggi > 160)) {
        tarif = 60000;
        cout << "Tarif tiket: Rp " << tarif << endl;

    } else if ((umur >= 10 && umur < 12) || (tinggi > 150 && tinggi <= 160)){
        tarif = 40000;
        cout << "Tarif tiket: Rp " << tarif << endl;

    } else if ((umur >= 8 && umur < 10) || (tinggi > 135 && tinggi <=150)){
        tarif =
        25000;
        cout << "Tarif tiket: Rp " << tarif << endl;

    } else if ((umur >= 5 && umur < 8) || (tinggi > 120 && tinggi < 135)){
        tarif = 15000;
        cout << "Tarif tiket: Rp " << tarif << endl;

    } else {
        cout << "-1 " << endl;
    }

return 0;
}
