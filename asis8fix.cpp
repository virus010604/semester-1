//Juan P Kuganda_f55123061
#include <iostream>
using namespace std;

int tanggalfix (int t,int b,int y);

int main(){

int tanggal,bulan,tahun;
cout << "Masukan tanggal: ";cin >> tanggal;
cout << "Masukan bulan: ";cin >> bulan;
cout << "Masukan Tahun: ";cin >> tahun;
tanggalfix (tanggal,bulan,tahun);

return 0;
}

int tanggalfix (int t,int b,int y){

string namabulan[12] = {"january","ferbuary","march","april","may","june","july"
                        ,"august","september","october","november","december"};

int tipe,tsatu,tdua,ttiga;

if (b == 1){
    tipe = tsatu;
        }else if (b == 2){
    tipe = tdua;
        }else if (b == 3){
    tipe = tsatu;
        }else if (b == 4){
    tipe = ttiga;
        }else if (b == 5){
    tipe = tsatu;
        }else if (b == 6){
    tipe = ttiga;
        }else if (b == 7){
    tipe = tsatu;
        }else if (b == 8){
    tipe = tsatu;
        }else if (b == 9){
    tipe = ttiga;
        }else if (b == 10){
    tipe = tsatu;
        }else if (b == 11){
    tipe = ttiga;
        }else if (b == 12){
    tipe = tsatu;
        }else{ cout << "=====================" << endl;
    cout << "input bulan salah" << endl;
    return 0;}

if (tipe == tdua){
    if (t > 28){
        cout << "======================" << endl;
        cout << "inpu tanggal melibih batas. hanya sampai tanggal 28"<<endl;
        return 0;
    }
}else if (tipe == ttiga){
    if (t > 30){
        cout << "======================" << endl;
        cout << "input tanggal melebihi batas. hanya sampai tanggal 30"<<endl;
        return 0;
    }
}else if (tipe == tsatu){
    if (t > 31){
        cout << "======================" << endl;
        cout << "input tanggal melebihi batas. hanya sampai tanggal 31" << endl;
        return 0;
    }
}

if ((t > 0) && (t < 10)){
    cout << "====================" << endl;
    cout << "0" << t << "-" << namabulan[b - 1] << "-" << y << endl;
}else if(t < 0){
    cout << "====================" << endl;
    cout << "inputan salah bang" << endl;
}else{
    cout << "====================" << endl;
    cout << t << "-" << namabulan[b - 1] << "-" << y << endl;
}

return t,b,y;
}
