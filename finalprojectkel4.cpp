//kelompok 4
#include <iostream>
#include <string.h>

using namespace std;

//deklarasi global
struct database{

int pilihan;
float ukuran;
char yn;
int bonus[1]= {1000};
int harga_normal[2] = {4500,2500};
int total;
int total2;
int jumlah;
int bahasa;
int donasikan;
int perubahan;
int pass = 1234;
int z2;

};

//PROTOTYPE
database a;
int akhir(struct database);
int fungsi();
int fungsi2();
int ukuranml (struct database);
int gelaskaca(struct database);
int gelasplastik(struct database);
int donasi(struct database);
int donation(struct database);
int ukuranml1 (struct database);
void admin(struct database);
//PROTOTYPE

int main(){

akhir(a);

return 0;
}

//fungsi

void admin(struct database){
cout << "==============================================================================" << endl <<endl;
awal:
    cout << "1.admin\n2.user" << endl;
    cout << "Anda akan masuk sebagai apa?: "; cin >> a.pilihan;
        if (a.pilihan == 1) {
            do{
            cout << "Masukkan sandi: ";cin >> a.z2;
                if(a.z2 == a.pass){
                cout << "1.Harga Normal Botol Kaca(4500)\n2.Harga Normal Botol Plastik(2500)\n3.bonus awal(1000)\n4.kembali" << endl;
            cout << "apa yang anda ingin ubah? ";cin >> a.pilihan;
                if(a.pilihan == 1){
                    a.harga_normal[0];
                    cout << "masukan jumlah perubahan: "; cin >> a.perubahan;
                    a.harga_normal[0] = a.perubahan;
                    admin (a);
                }else if (a.pilihan == 2){
                    a.harga_normal[1];
                    cout << "masukan jumlah perubahan: "; cin >> a.perubahan;
                    a.harga_normal[1] = a.perubahan;
                    admin (a);
                }else if (a.pilihan == 3){
                    a.bonus[0];
                    cout << "masukan jumlah perubahan: "; cin >> a.perubahan;
                    a.bonus[0] = a.perubahan;
                    admin (a);
                }else if (a.pilihan == 4){
                    goto awal;
                }
                }else {
                    cout << "pass salah"<< endl;
                }
            }while(a.z2 != a.pass);

        }else if (a.pilihan == 2){

        }else{
            cout << "==============" << endl;
            cout << "pilihan salah" << endl;
        }
 cout << "\n==============================================================================" << endl;
}

int fungsi(){

    cout << "======DISPLAY======\n" <<"Ketentuan:\nBotol yang anda dapat masukkan:" << endl;
    cout << "1.Botol Kaca "<< a.harga_normal[0] <<"\n2.Botol Plastik " << a.harga_normal[1] <<endl;
    cout << "Masukkan Pilihan anda(1/2): "; cin >> a.pilihan;
cout << "\n==============================================================================" << endl;

    if (a.pilihan == 1){
    gelaskaca(a);
    cout << "apakah ingin menambah botol(y/n): ";cin >> a.yn;
        if (a.yn == 'y'||a.yn =='Y'){
    return fungsi();
        }else if (a.yn == 'n' || a.yn == 'N'){
            return 0;
        }


    }else if (a.pilihan == 2){
    gelasplastik(a);
    cout << "apakah ingin menambah botoly/n: ";cin >> a.yn;
        if (a.yn == 'y'|| a.yn == 'Y'){
    return fungsi();
        }else if (a.yn == 'n' || a.yn == 'N'){
            cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\nRedeem your last bill to cashier\n\nThank you Stay green:)\n" << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++" << endl;
            return 0;
        }

    }else {
        cout << "Pilihan tidak terdapat di Display" << endl;
    }
return 0;

}

int fungsi2(){


do{

    cout << "======DISPLAY======\n" <<"conditions:\nBottles you can put in:" << endl;
    cout << "1.glass bottle "<< a.harga_normal[0] <<"\n2.plastic bottle " << a.harga_normal[1] <<endl;
    cout << "Input yout choice(1/2): "; cin >> a.pilihan;
  cout << "\n==============================================================================" << endl;


    if (a.pilihan == 1){
        a.harga_normal[0];
        a.jumlah;
            cout << "con:if the bottle size 350ml, the price is normal .\n"
            << "     but if the size of the bottle more than 350ml bonus 1k." << endl;
             cout << "\n==============================================================================" << endl;
            cout << "Input amount of bottles: ";cin >> a.jumlah;
            cout << "input size of the bottle(ml): "; cin >> a.ukuran;

                if (a.ukuran > 350){
                a.total2 = (a.bonus[0]*a.jumlah) + (a.harga_normal[0] * a.jumlah);
                cout << "\n==============================================================================" << endl;
                cout << "bonus: "<< a.bonus[0] << endl;
                         cout << "uang yang di tukarkan: " << a.total2 << endl;
                            donation(a);

                }else if(a.ukuran > 0 && a.ukuran <= 350){
                a.total2 = a.harga_normal[0] * a.jumlah;
                 cout << "uang yang di tukarkan: " << a.total2 << endl;
                donation(a);

                }else{
                cout << "wrong size input!" << endl;
            }


    }else if (a.pilihan == 2){
            a.harga_normal[1];
                cout << "con: if the bottle not available the recyle logo/emblem normal prize.\n"
                << "     but if the bottle available the recyke logo/emblem bonus 1k." << endl;
                cout << "con: if the bottle size 350ml or under normal prize.\n"
                << "     but if the bottle size more than 350ml bonus 1k." << endl;
                 cout << "\n==============================================================================" << endl;
                cout << "input the amount of the bottles: ";cin >> a.jumlah;
                cout << "are the bottles available for the recyle logo/emblem(y/n): ";cin >> a.yn;

                    if (a.yn == 'y' || a.yn == 'Y'){

                    a.total = (a.jumlah * a.harga_normal[1]) + (a.bonus[0]*a.jumlah);
                    cout << "=============================================" << endl;
                    cout << "bonus: "<< a.bonus[0] << endl;
                    cout << "input size of the bottle: ";cin >> a.ukuran;

                         if (a.ukuran > 350){
                        a.total2 = a.total + (a.bonus[0] * a.jumlah);
                        cout << "bonus: "<< a.bonus[0] << endl;
                         cout << "amount of money: " << a.total2 << endl;
                            donation(a);

                        }else if(a.ukuran > 0 && a.ukuran <= 350){
                        a.total2 = a.total * a.jumlah;
                         cout << "amount of money: " << a.total2 << endl;
                            donation(a);

                        }else{
                         cout << "input size wrong!" << endl;

            }

                    }else if (a.yn == 'N' || a.yn == 'n'){
                    a.total = a.jumlah * a.harga_normal[1];
                    cout << "input size of the bottle(ml): "; cin >> a.ukuran;

                        if (a.ukuran > 350){
                        a.total2 = a.total + a.bonus[0]*a.jumlah;
                         cout << "bonus: "<< a.bonus[0] << endl;
                         cout << "amount of money: " << a.total2 << endl;
                            donation(a);

                        }else if(a.ukuran > 0 && a.ukuran <= 350){
                        a.total2 = a.total * a.jumlah;
                        cout << "amount of money: " << a.total2;
                            donation(a);

            }else{
                cout << "input size wrong!" << endl;
            }

            }else{
                cout << "input wrong!" << endl;
            }
    }else {
        cout << "input not in the display!" << endl;
    }
    cout << "do you want to put more bottle?(y/n): "; cin >> a.yn;
}while(a.yn == 'y' ||a.yn == 'Y');

return 0;
}

int akhir(struct database){
    admin(a);
awal:
cout << "\t\t\t\tWELCOME TO\n\t\t\t\tBottleMine" << endl;
cout << "==============================================================================" << endl <<endl;
cout << "\t\t\t\t1.Indonesia\n\t\t\t\t2.english\n\t\t\t\tinput language options: "; cin >> a.bahasa;
        if(a.bahasa == 1){
            fungsi();
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\nTukarkan Struk terakhir anda di kasir\n\nTerimakasih Stay green:)\n" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            return 0;
        }else if(a.bahasa == 2){
            fungsi2();
            cout<< "+++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\nRedeem your last bill to cashier\n\nThank you Stay green:)\n" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            return 0;
        }else {

            cout << "input salah masukan ulang" << endl;
            goto awal;
        }



return 0;
}

int gelaskaca(struct database){

        a.harga_normal[0];
        a.jumlah;
            cout << "ket: jika ukuran botol 350 ml harga normal.\n"
            << "     namun jika ukuran botol lebih dari 350 ml bertambah 1k." << endl;
            cout << "\n==============================================================================" << endl;
            cout << "Masukkan Jumlah botol: ";cin >> a.jumlah;
            cout << "Masukkan Ukuran Botol(ml): "; cin >> a.ukuran;
            ukuranml(a);
return 0;
}

int ukuranml (struct database){


                if (a.ukuran > 350){
                a.total2 = (a.jumlah*a.bonus[0]) + (a.harga_normal[0] * a.jumlah);
                cout << "bonus: "<< a.bonus[0] << endl;
                cout << "uang yang di tukarkan: " << a.total2 << endl;

                donasi(a);

                }else if(a.ukuran > 0 && a.ukuran <= 350){
                a.total2 = a.jumlah * a.harga_normal[0];
                cout << "uang yang di tukarkan: " << a.total2 << endl;

                donasi(a);

                }else{
                cout << "ukuran yang anda masukkan salah!" << endl;
                }
return 0;
}

int ukuranml1 (struct database){


                if (a.ukuran > 350){
                a.total2 = (a.jumlah*a.bonus[0]) + a.total;
                cout << "bonus: "<< a.bonus[0] << endl;
                cout << "uang yang di tukarkan: " << a.total2 << endl;

                donasi(a);

                }else if(a.ukuran > 0 && a.ukuran <= 350){
                a.total2 = a.total;
                cout << "uang yang di tukarkan: " << a.total2 << endl;

                donasi(a);

                }else{
                cout << "ukuran yang anda masukkan salah!" << endl;
                }
return 0;
}

int gelasplastik (struct database){

    a.harga_normal[1];
                cout << "ket: jika botol tidak terdapat label Daur Ulang harga normal.\n"
                << "     namun jika botol terdapat label daur ulang bertambah 1k." << endl;
                cout << "ket: jika ukuran botol 350 ml harga normal.\n"
                << "     namun jika ukuran botol lebih dari 350 ml bertambah 1k." << endl;
                cout << "\n==============================================================================" << endl;
                cout << "masukan jumlah botol yang ingin ditukarkan: ";cin >> a.jumlah;
                cout << "Apakah botol terdapat label daur ulang(y/n): ";cin >> a.yn;

                    if (a.yn == 'y' || a.yn == 'Y'){

                    a.total = (a.jumlah * a.harga_normal[1]) + (a.bonus[0]*a.jumlah);
                    cout << "=============================================" << endl;
                    cout << "bonus: "<< a.bonus[0] << endl;
                    cout << "masukkan ukuran botol(ml): ";cin >> a.ukuran;
                    ukuranml1(a);


                    }else if (a.yn == 'N' || a.yn == 'n'){
                    a.total = a.jumlah * a.harga_normal[1];
                    cout << "masukkan ukuran botol(ml): "; cin >> a.ukuran;
                    ukuranml1(a);
            }else{
                cout << "pilihan yang anda masukkan salah" << endl;
            }
return 0;
}

int donasi(struct database){
    cout << "apakah anda ingin donasi ke kelompok pecinta alam(y/n): "; cin >> a.yn;
        if(a.yn == 'y'||a.yn == 'Y'){
            cout << "berapa yang anda ingin donasikan: ";cin >> a.donasikan;
                        if(a.donasikan > a.total2){
                            cout << "saldo tidak cukup" << endl;
                        }

        cout << "=======================struk======================" << endl;
        cout << "jumlah botol yang dimasukkan: " << a.jumlah
        << "\nukuran yang anda masukkan : " << a.ukuran << "ml"
        << "\nyang anda donasikan: " << a.donasikan
        << "\nuang yang ditukarkan: "<< a.total2-a.donasikan << endl;
        cout << "==================================================" << endl;
        }else if(a.yn == 'n'||a.yn == 'N'){
        cout << "=======================struk======================" << endl;
        cout << "jumlah botol yang dimasukkan: " << a.jumlah
        << "\nukuran yang anda masukkan : " << a.ukuran << "ml"
        << "\nuang yang ditukarkan: "<< a.total2 << endl;
        cout << "==================================================" << endl;
        }else{
            cout << "pilihan salah" << endl;
        }

}

int donation(struct database){
    cout << "are do you want to give donations to community?(y/n): "; cin >> a.yn;
        if(a.yn == 'y'||a.yn == 'Y'){
            cout << "how much you wanna to give: ";cin >> a.donasikan;
                            if(a.donasikan > a.total2){
                            cout << "your balance not enough" << endl;
                        }

        cout << "=======================bill======================" << endl;
        cout << "amount of bottle: " << a.jumlah
        << "\nsize of the bottle : " << a.ukuran << "ml"
        << "\ndonations: " << a.donasikan
        << "\nredeem money: "<< a.total2-a.donasikan << endl;
        cout << "=================================================" << endl;
        }else if(a.yn == 'n'||a.yn == 'N'){
        cout << "=======================struk======================" << endl;
        cout << "amount of bottle: " << a.jumlah
        << "\nsize of the bottle : " << a.ukuran << "ml"
        << "\nredeem money: "<< a.total2 << endl;
        cout << "==================================================" << endl;
        }else{
            cout << "wrong input" << endl;
        }

}
