#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    mahasiswa mhs;
    cout << "nomor mahasiswa: ";
    getline(cin,mhs.nim);
    cout << "nama mahasiswa : ";
    getline(cin,mhs.nama);
    
