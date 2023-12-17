#include <iostream>
using namespace std;

int main(){
int utama = 75000;
int penutup = 30000;
int kartu = 5000;
int pilihan,tarif,jumlah,totaltarif;
char metode,yn;
string cara,diskon;

cout << "Desser Juan" << endl;
cout << "=========menu==========";
cout << "\n1.makanan utama= Rp.75000\n2.makanan penutup =Rp.30000"
<< endl;

do{
        cout << "====================" << endl;

cout << "Masukan pilihan Menu: ";cin >> pilihan;
        if (pilihan == 1){
             jumlah;

            cout << "Masukan Jumlah: "; cin >> jumlah;
            totaltarif = jumlah * utama;
                if (jumlah >= 2){
                        diskon = "5%";
                     totaltarif = totaltarif - 3750;
                    cout << "harga diskon: Rp." << totaltarif << endl;
                    }else
                    {cout << "Harga normal: Rp." << totaltarif << endl;}

        }else if (pilihan == 2){
            jumlah;

            cout << "Masukan Jumlah: "; cin >> jumlah;
            totaltarif = jumlah * penutup;
                if (jumlah >= 3){
                        diskon = "10%";
                     totaltarif = totaltarif - 3000;
                    cout << "harga diskon: Rp." << totaltarif << endl;
                    }else
                    {cout << "Harga normal: Rp." << totaltarif << endl;}
        }else
        {cout << "Pilian menu salah\n";
    }

cout << "masukan metode pembayaran(k/t): "; cin >> metode;
        if (metode == 'k'|| metode == 'K'){
           cara = "Kartu";
           totaltarif = totaltarif + kartu;
        }else if (metode == 't'|| metode == 'T'){
           cara = "tunai";
           totaltarif = totaltarif;
        }

cout << "\n=========Nota========\n";
cout << "Menu yang di Pilih: " << pilihan << endl;
cout << "Jumlah yang di pesan: " << jumlah<< endl;
cout << "Total tarif + administrasi: " << totaltarif << endl;
cout << "diskon: " << diskon << endl;
cout << "metode pembayaran: " << cara << endl;
cout << "=========================\n";
cout << "ingin menambah pesanan(y/n): "; cin >> yn;
}while (yn == 'y'|| yn == 'Y');
cout << "terimakasih"<<endl;
}
