#include <iostream>
using namespace std;

int main(){

    int jumlahhari=5;
    int array_kalori[jumlahhari];
    int total=0;

    for(int i = 0; i < jumlahhari; i ++){
        cout << "masukan kalori dari hari " << i+1 << ": ";
        cin >> array_kalori[i];
    }

    cout << "\nInilah deret kalori selama 5 hari"<<endl;
        cout << "\n===========================\n";
     for(int i = 0; i < jumlahhari; i ++){
         cout <<"Hari ke-"<< i+1 << " : " <<array_kalori[i]<<endl;
        total += array_kalori[i];
    }

    cout << "===========================\n";
    cout << "Total kalori anda dalam 5 hari= "<<total<<" kalorii"<<endl;
    return 0;
}
