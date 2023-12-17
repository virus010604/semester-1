
#include <iostream>
using namespace std;

int main(){
    int arr[10] = {23,27,56,67,89,99,12,3,6,8};
    cout << "sebelum di balik :";
    for (int i = 0;i<10;i++){
        cout << arr[i]<< " ";
        }
    cout << "\nsesudah di balik :";
    for (int b = 9; b >= 0; b--){
        cout << arr[b] << " ";
        }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<10;i++){

      if (arr[i]>max){
        max=arr[i];
      }else if (arr[i]<min){
        min=arr[i];
      }
    }
        cout << "\nNilai maksimal: "<<max;
        cout << "\nNilai minimum: "<<min<<endl;

  return 0;
}
