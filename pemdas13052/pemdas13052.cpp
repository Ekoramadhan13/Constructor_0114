#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static long long int nim;
public:
    long long int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

long long int mahasiswa::nim = 0;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Eko ramadhan");
    mahasiswa::setNim(0114);
    mahasiswa mhs2("Azkal azkia");
    mahasiswa mhs3("Yusuf hidayat");
    mahasiswa mhs4("Irfan fauzi");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

    return 0;

}


