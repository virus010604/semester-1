#include <iostream>

using namespace std;

int main()
{
    string kalimat;
    int cadel = 0;

    cout << "Input kata / kalimat: ";
    getline(cin,kalimat);
    cout << endl;

    for(int i = 0; i < kalimat.length(); i++){
        if (kalimat[i]=='R'|| kalimat[i]=='r'|| kalimat[i]=='S'|| kalimat[i]=='s'|| kalimat[i]=='T'|| kalimat[i]=='t'|| kalimat[i]=='Z'|| kalimat[i]=='z') {
            cadel++;
        }
    }

    if (cadel > 0) {
        cout << "Jumlah huruf yang tidak bisa disebutkan = " << cadel;
    } else {
        cout << "Semua huruf bisa disebutkan dengan normal.";
    }

    cout << endl;
    return 0;
}
