//kelompok 4
#include <iostream>
#include <string.h>

using namespace std;

//deklarasi global
struct database{

int pilihan;
float ukuran;
char yn;
int bonus = 5000;
int harga_normal;
int total;
int total2;
int harga;
int jumlahb;
int jumlahp;

};

database a;
int akhir(struct database);
int fungsi();

int main(){

akhir(a);

return 0;
}

//fungsi

int fungsi(){

cout << "\b\bWELCOME TO\nBottleMine" << endl;

do{
    cout << "======DISPLAY======\n" <<"Ketentuan:\nBotol yang anda dapat masukan:" << endl;
    cout << "1.Botol Kaca(4500)\n2.Botol Plastik(2500)" <<endl;
    cout << "Masukan Pilihan anda(1/2): "; cin >> a.pilihan;
    cout << "=============================================" << endl;


    if (a.pilihan == 1){
        a.harga_normal = 4500;
        a.jumlahb;
            cout << "ket: jika ukuran botal 350 ml harga normal.\n"
            << "     namun jika ukuran botol lebih dari 350 ml bertambah 5ribu." << endl;
            cout << "=============================================" << endl;
            cout << "Masukan Jumlah botol: ";cin >> a.jumlahb;
            cout << "Masukab Ukuran Botol(ml): "; cin >> a.ukuran;

                if (a.ukuran > 350){
                cout << "=======================struk======================" << endl;
                cout << "bonus 5ribu" << endl;
                a.total = a.bonus + (a.harga_normal * a.jumlahb);
                cout << "jumlah botol yang di masukan: " << a.jumlahb
                << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                << "\nuang yang di tukarkan: "<< a.total << endl;
                 cout << "=============================================" << endl;

                }else if(a.ukuran > 0 && a.ukuran <= 350){
                cout << "====================struk======================" << endl;
                 cout << "jumlah botol yang di masukan: " << a.jumlahb
                << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                << "\nuang yang di tukarkan: "<< a.harga_normal << endl;
                 cout << "=============================================" << endl;

                }else{
                cout << "ukuran anda masukan salah!" << endl;
            }


    }else if (a.pilihan == 2){
            a.harga_normal = 2500;
                cout << "ket: jika botal tidak terdapat label daru ulang harga normal.\n"
                << "     namun jika botol terdapat label daur ulang bertambah 5ribu." << endl;
                cout << "ket: jika ukuran botal 350 ml harga normal.\n"
                << "     namun jika ukuran botol lebih dari 350 ml bertambah 5ribu." << endl;
                cout << "=============================================" << endl;
                cout << "masukan jumlah botol yang ingin di tukarkan: ";cin >> a.jumlahp;
                cout << "Apakah botol terdapat label daru ulang(y/n): ";cin >> a.yn;

                    if (a.yn == 'y' || a.yn == 'Y'){

                    a.total = (a.jumlahp * a.harga_normal) + a.bonus;
                    cout << "=============================================" << endl;
                    cout << "bonus 5ribu" << endl;
                    cout << "masukan ukuran botol: ";cin >> a.ukuran;

                     if (a.ukuran > 350){
                    a.total2 = a.total + a.bonus;
                    cout << "======================struk=======================" << endl;
                    cout << "bonus 5ribu" << endl;
                    cout << "jumlah botol yang di masukan: " << a.jumlahp
                    << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                    << "\nuang yang di tukarkan: "<< a.total2 << endl;
                    cout << "=============================================" << endl;

                    }else if(a.ukuran > 0 && a.ukuran <= 350){
                    a.total2 = a.total;
                    cout << "=======================struk======================" << endl;
                    cout << "jumlah botol yang di masukan: " << a.jumlahp
                    << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                    << "\nuang yang di tukarkan: "<< a.total2 << endl;
                    cout << "=============================================" << endl;

                    }else{
                    cout << "ukuran anda masukan salah!" << endl;
            }

                    }else if (a.yn == 'N' || a.yn == 'n'){
                    a.total = a.jumlahp * a.harga_normal;
                    cout << "masukan ukuran botol(ml): "; cin >> a.ukuran;

                        if (a.ukuran > 350){
                        a.total2 = a.total + a.bonus;
                        cout << "========================struk=====================" << endl;
                        cout << "bonus 5ribu" << endl;
                        cout << "jumlah botol yang di masukan: " << a.jumlahp
                        << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                        << "\nuang yang di tukarkan: "<< a.total2 << endl;
                        cout << "=============================================" << endl;

                        }else if(a.ukuran > 0 && a.ukuran <= 350){
                        a.total2 = a.total;
                        cout << "=======================struk======================" << endl;
                        cout << "jumlah botol yang di masukan: " << a.jumlahp
                        << "\nukuran yang anda masukan : " << a.ukuran << "ml"
                        << "\nuang yang di tukarkan: "<< a.total2 << endl;
                        cout << "=============================================" << endl;

            }else{
                cout << "ukuran anda masukan salah!" << endl;
            }

            }else{
                cout << "pilihan anda masukan salah" << endl;
            }
    }else {
        cout << "PILihan Tidak terdapat di display" << endl;
    }
    cout << "tambah botol(y/n): "; cin >> a.yn;
}while (a.yn == 'y' || a.yn == 'Y');

return 0;
}

int akhir(struct database){

fungsi();
cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
cout << "\nTukarkan Struk terakhir anda di kasir\n\nTerimakasih Stay green:)\n" << endl;
cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;

return 0;
}
