#include <iostream>
using namespace std;

void cetakData(string nama, string jurusan, string nisn , int tinggibadan)
{
    
    cout<<"Nama: "<< nama << endl;
    cout<<"Jurusan: "<< jurusan << endl;
    cout<<"NISN: "<< nisn << endl;
    cout<<"Tinggi Badan: " << tinggibadan << endl;
}

int main() {
    string nama;
    string jurusan;
    string nisn;
    int tinggibadan;

    cout<<"Masukkan Nama: ";
    cin>> nama;

    cout<<"Masukkan Jurusan: ";
    cin>> jurusan;

    cout<<"Masukkan NISN: ";
    cin>> nisn;

    cout<<"Masukkan Tinggi Badan (cm): ";
    cin>> tinggibadan;


    cetakData(nama, jurusan, nisn, tinggibadan);

    return 0;
}
