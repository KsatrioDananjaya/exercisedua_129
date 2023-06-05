#pragma once
#ifndef PENGARANG_H
#define PENGARANG_H
#include "Penerbit.h"
#include "Buku.h"

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

#endif // !PENGARANG_H

