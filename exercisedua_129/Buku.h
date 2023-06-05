#pragma once
#ifndef BUKU_H
#define BUKU_H
#include "Pengarang.h"

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
#endif // !BUKU_H

