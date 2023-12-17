#include <iostream>
#include <string.h>
using namespace std;

struct detail{

    int uang[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
    string namaproduk;
    int tax[3] = {200, 500, 1000};

};

detail produk;
int moneychanges(struct detail);
int jumlahuang();

int main(){

    moneychanges(produk);
    return 0;

}

int jumlahuang(){
float harga, total, inputuang, kembalian;

        cout << "Masukkan Uang anda : ";

        cin >> inputuang;
    if ((produk.namaproduk == "CELANA") or (produk.namaproduk == "Celana") or (produk.namaproduk == "celana"))
    {
        harga = 2000;
        total = harga + produk.tax[0];
        kembalian = inputuang - total;
    cout << "Produk : " << produk.namaproduk << " , harga : " << harga << ", Tax : " << produk.tax[0] << endl;
    cout << "Total belanja anda : " << total << "\nkembalian anda : " << kembalian << "\ndengan pecahan : "<< endl;
    }else if ((produk.namaproduk == "BAJU") or (produk.namaproduk == "Baju") or (produk.namaproduk == "baju"))
    {
        harga = 5000;
        total = harga + produk.tax[1];
        kembalian = inputuang - total;
    cout << "Produk : " << produk.namaproduk << " , harga : " << harga << ", Tax : " << produk.tax[1] << endl;
    cout << "Total belanja anda : " << total << "\nkembalian anda : " << kembalian << "\ndengan pecahan : " << endl;
    }else if ((produk.namaproduk == "JAKET") or (produk.namaproduk == "Jaket") or (produk.namaproduk == "jaket"))
    {
        harga = 10000;
        total = harga + produk.tax[2];
        kembalian = inputuang - total;
    cout << "Produk : " << produk.namaproduk << " , harga : " << harga << ", Tax : " << produk.tax[2] << endl;
    cout << "Total belanja anda : " << total << "\nkembalian anda : " << kembalian << "\ndengan pecahan : " << endl;
    }

    for (int i = 0; i < 9; i++) {
        while (kembalian >= produk.uang[i]) {
            cout << produk.uang[i] << ", ";
            kembalian -= produk.uang[i];
        }
    }
        cout << endl;
    return 0;
}

int moneychanges(struct detail){
    cout << "=======menu=======\n"
    << "Baju = 5000+pajak(500)\nJaket = 10000+pajak(1000)\nCelana = 2000+pajak(200)" << endl;
    cout << "==================" << endl;

    cout << "Masukkan nama produk : ";
    cin >> produk.namaproduk;
    jumlahuang();
    return 0;
}
