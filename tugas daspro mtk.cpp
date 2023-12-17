#include<iostream>
#include<string>
using namespace std;

    double luasPersegiPanjang(double panjang, double lebar);
    double luasPersegi(double sisi);
    double luasSegitiga(double alas , double tinggi);
    double luasLingkaran(double jari);
    void display();
int main() {
    // Contoh penggunaan fungsi
    double p;
    double l;
    double s;
    double j;
    double a;
    double t;
    char pilihan;
    display();

cout << "PILILAH DI ATAS INI: ";cin >> pilihan;

if (pilihan == 'a'){
     cout<<"masukan panjang persegi panjang: ";cin>>p;
     cout<<"masukan lebar persegi panjang: ";cin>>l;
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang(p, l) << endl;
cout<<"================================================"<<endl;
}else if(pilihan == 'b'){
     cout<<"masukan sisi persegi: ";cin>>s;
    cout << "Luas Persegi: " << luasPersegi(s) << endl;
cout<<"================================================"<<endl;
}else if(pilihan == 'c'){
     cout<<"masukan jari jari lingkaran: ";cin>>j;
    cout << "Luas Lingkaran: " << luasLingkaran(j) << endl;
cout<<"================================================"<<endl;
}else if(pilihan == 'd'){
     cout<<"masukan alas segitiga: ";cin>>a;
     cout<<"masukan tinggi segitiga: ";cin>>t;
    cout << "Luas Segitiga: "<< luasSegitiga(a,t);
}else{
cout << "pilhan salah";
}
    return 0;
}


// Fungsi menghitung luas persegi panjang
double luasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}
// Fungsi menghitung luas persegi
double luasPersegi(double sisi) {
    return sisi * sisi;
}
// Fungsi menghitung luas segitiga
double luasSegitiga(double alas , double tinggi){
    return 0.5 * alas * tinggi;
}
// Fungsi menghitung luas lingkaran
double luasLingkaran(double jari) {
    return 3.14 * jari * jari; // atau gunakan M_PI * jari * jari jika M_PI sudah didefinisikan
}
// pilihan fungsi:
void display(){
cout << "========================\n";
cout << "A.Persegi Panjang\nB.Persegi\nC.Lingkaran\nD.Segitiga"<<endl;
cout << "========================\n";
}
