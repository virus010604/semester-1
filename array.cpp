// Juan P kuganda_F55123061
#include <iostream>
using namespace std;

int main () {
/*int data_lulus[3][4];
char jur[10][3] = {"TI","MI","TK"};
int thn[4] = {2012,2013,2014,2015};
int jurusan, tahun;

cout << "input database kelulusan tahun 2012-2015"<<endl;
cout << "====================================\n"<< endl;
for(int baris = 0; baris <3; baris++){
    for(int kolom = 0; kolom < 4; kolom++){
        cout << "Masukan Jumlah lulusan " << jur[baris] << " tahun " <<
        thn[kolom] << " : ";cin>>data_lulus[baris][kolom];
    }
}
        cout << "\ndata kelulusan tahun 2012-2015"<<endl;
        cout << "====================================\n"<< endl;

while (1){
    cout << "Masukan jurusan (0 = TI, 1 = MI, 2 = TK) :";
    cin >> jurusan;
    if (jurusan == 0 || jurusan == 1 || jurusan == 2){
        break;
    }

}

while (1){
    cout << "Masukan tahun (" << thn [0] << " - " << thn [3] << ") :";
    cin >> tahun;
    if (tahun >= thn[0] && tahun <= thn[3]){
        tahun -= thn[0];//konversi index 0,1,2 atau 3
        break;
    }
}
         cout << "\n===================================\n"<<endl;

cout<< "Jumlah yang lulus = "<< data_lulus[jurusan][tahun] << "\n";
system ("pause");
*/

string orang[3] = {"marie curie","charles darwin","albert einstein"};

for(int i = 2; i >= 0;i--){

cout << orang[i] << " ";
}


return 0;














}
