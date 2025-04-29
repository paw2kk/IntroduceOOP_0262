#include <iostream>
using namespace std;

class mahasiswa{
public:
int nim;
string nama;
float nilai;

    void print_data(){
        cout << "NIM  = " << nim << endl;
        cout << "Nama  = " << nama << endl;
        cout << "NIlai  = " << nilai << endl;
    }

};


int main(){
    mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "Aufa";
    mhs.nilai = 100;

    mhs.print_data();
}