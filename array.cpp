#include <iostream>
using namespace std;

int main(){
    //deklarasi array dengan inisialisasi
    int dataku [5] = {10,20,30,40,50};
     //deklarasi tanpa inisialisasi
    int datamu [5];

    //cara akses (membaca atau mengambil isi array)
    cout << "isi data kedua : " << dataku[1] << endl;
    //Mengisi array
    dataku[1] = 200;
    cout << "isi data kedua setelah diubah : " << dataku[1] << endl;

    //mengisi data dengan perintah satu persatu
    cout << "isikan data pertama : ";
    cin >> datamu [0];
    cout << "isikan data kedua : ";
    cin >> datamu [1];
    cout << "Isikan data ketiga : ";
    cin >> datamu[2];
    cout << "Isikan data keempat : ";
    cin >> datamu[3];
    cout << "Isikan data kelima : ";
    cin >> datamu[4];
    cout << endl;

     // mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }
    


