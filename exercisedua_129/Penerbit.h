#pragma once
#ifndef PENERBIT_H
#define PENERBIT_H
#include "Pengarang.h"
#include <iostream>
#include <vector>
using namespace std;

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

#endif // !1
