#include <iostream>
#include <vector>
using namespace std;

class buku;
class pengarang;
class penerbit {
public:
    string nama;
    vector<pengarang*> daftar_pengarang;
    penerbit(string pNama) :nama(pNama) {
        cout << "Penerbit \"" << nama << "\" ada \n";
    }
    ~penerbit() {
        cout << "Penerbit \"" << nama << "\" tidak ada \n";
    }
    void addArang(pengarang*);
    void cetakArang();
};

class pengarang {
public:
    string nama;
    vector<penerbit*> daftar_penerbit;
    vector<buku*> daftar_buku;
    pengarang(string pNama) :nama(pNama) {
        cout << "Pengarang \"" << nama << "\" ada \n";
    }
    ~pengarang() {
        cout << "Pengarang \"" << nama << "\" tidak ada \n";
    }
    void addTerbit(penerbit*);
    void cetakTerbit();
    void addBuku(buku*);
    void cetakBuku();
};

class buku {
public:
    string nama;
    vector<pengarang*> daftar_pengarang;
    buku(string pNama) :nama(pNama) {
        cout << "Buku \"" << nama << "\" ada \n";
    }
    ~buku() {
        cout << "Buku \"" << nama << "\" tidak ada \n";
    }
    void addArang(pengarang*);
    void cetakArang();
};

void penerbit::addArang(pengarang* pPengarang) {
    daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakArang() {
    cout << "Daftar Pengarang pada penerbit \"" << this->nama << "\" : \n";
    for (auto& a : daftar_pengarang) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

void pengarang::addTerbit(penerbit* pPenerbit) {
    daftar_penerbit.push_back(pPenerbit);
    pPenerbit->addArang(this);
}
void pengarang::cetakTerbit() {
    cout << "Daftar Penerbit yang diikuti \"" << this->nama << "\" : \n";
    for (auto& a : daftar_penerbit) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

void pengarang::addBuku(buku* pBuku) {
    daftar_buku.push_back(pBuku);
    pBuku->addArang(this);
}
void pengarang::cetakBuku() {
    cout << "Daftar Buku yang dikarang \"" << this->nama << "\" : \n";
    for (auto& a : daftar_penerbit) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main()
{
    pengarang* varArang1 = new pengarang("Joko");
    pengarang* varArang2 = new pengarang("Lia");
    pengarang* varArang3 = new pengarang("Asroni");
    pengarang* varArang4 = new pengarang("Giga");
    penerbit* varTerbit1 = new penerbit("Gama Press");
    penerbit* varTerbit2 = new penerbit("Pariwara");
    buku* varBuku1 = new buku("Fisika");
    buku* varBuku2 = new buku("Algoritma");
    buku* varBuku3 = new buku("Basisdata");
    buku* varBuku4 = new buku("Dasar Pemrograman");
    buku* varBuku5 = new buku("Matematika");
    buku* varBuku6   = new buku("Multimedia 1");

    varTerbit1->addArang(varArang1);
    varTerbit1->addArang(varArang2);
    varTerbit2->addArang(varArang3);
    varArang4->addTerbit(varTerbit1);
    varArang4->addTerbit(varTerbit2);
    varArang1->addBuku(varBuku1);
    varArang1->addBuku(varBuku2);
    varArang2->addBuku(varBuku3);
    varArang3->addBuku(varBuku4);
    varArang4->addBuku(varBuku5);
    varArang4->addBuku(varBuku6);

    varTerbit1->cetakArang();
    varTerbit2->cetakArang();
    varArang4->cetakTerbit();
    varArang1->cetakBuku();
    varArang2->cetakBuku();
    varArang3->cetakBuku();
    varArang4->cetakBuku();

    return 0;
}
