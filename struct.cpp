#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //deklarasi variabel struct
    Orang mhs;
    //mengisi data
    cout << "isikan data nama : " ;
    cin >> mhs.nama;
    cout << "isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "data tampil" << endl;
    cout << "nama : " << mhs.alamat << endl;
    cout << "alamat : " << mhs.alamat <<endl;
    cout << "umur : " << mhs.umur << endl; 
}
