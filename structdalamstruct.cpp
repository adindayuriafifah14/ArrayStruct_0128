#include <iostream> 
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    detailalamat alamat;
    int umur;
};

int main ()
{
    //deklarasi variabel struct
    orang mhs;
    //mengisi data 
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << endl;

    cout << "data tampil" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "desa : " << mhs.alamat.desa << endl;
    cout << "kota : " << mhs.alamat.kota << endl;
    cout << "umur : " << mhs.umur << endl;
}
