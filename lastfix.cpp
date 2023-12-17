#include <iostream>
#include <string.h>

using namespace std;

struct atribut{

string namaproduk;
int kembalian[9] = {1000,500,200,100,50,20,10,5,1};
int tax[3] = {200, 300, 400};

};

atribut utama;
int perhitungan();

int main(){

cout << "==================\n"
<< "1.Baju = 3000+pajak(300)\n2.Jaket = 5000+pajak(500)\n3.Celana = 2000+pajak(200)" << endl;
cout << "==================" << endl;
cout << "masukab pilihan: ";cin >> utama.namaproduk;
perhitungan();

}


int perhitungan(){

    int harga,uangA,total,kembalian;

    cout << "masukan uang yang di bayarkan: ";cin >> uangA;

    if ((atribut.namaproduk == "CELANA") || (atribut.namaproduk == "Celana") || (atribut.namaproduk == "celana"))
    {
        harga = 5000;
        total = harga + atribut.tax[0];
        kembalian = uangA - total;
    }else if ((atribut.namaproduk == "BAJU") || (atribut.namaproduk == "Baju") || (atribut.namaproduk == "baju"))
    {
        harga = 8500;
        total = harga + atribut.tax[1];
        kembalian = uangA - total;
    }else if ((atribut.namaproduk == "JAKET") || (atribut.namaproduk == "Jaket") || (atribut.namaproduk == "jaket"))
    {
        harga = 10500;
        total = harga + atribut.tax[2];
        kembalian = uangA - total;
    }
    cout << "Produk : " << atribut.namaproduk << " , harga : " << harga << ", Tax : " << atribut.tax[0] << endl;
    cout << "Total belanja anda : " << total << ", kembalian anda : " << kembalian << " dengan pecahan : ";
    for (int i = 0; i < 9; i++) {
        while (kembalian >= atribut.uang[i]) {
            cout << atribut.uang[i] << ", ";
            kembalian -= atribut.uang[i];
        }
    }
    return 0;

}
