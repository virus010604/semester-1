//Juan P kuganda_F55123061
//TI B
#include <iostream>
using namespace std;

int main(){

char nama[25], alias [25];
string nim;
unsigned int umur;

cout<<"Masukan nama anda: "; cin.getline(nama, 25);
cout<<"Masukan panggilan anda: ";cin>>alias;
cout<<"Berapa Nim anda: ";cin>>nim;
cout<<"Berapa Umur anda: ";cin>>umur;

cout<<"====================Data diri===================\n";
cout<<"nama lengkap: "<<nama<<"\nalias: "<<alias<<"\nNim anda: "<<nim<<"\numur anda: "<<umur<<" tahun\n";
cout<<"================================================";
return 0;
}
