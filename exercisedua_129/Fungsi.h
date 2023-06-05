#pragma once
#ifndef FUNGSI_H
#define FUNGSI_H
#include "Buku.h"
#include "Penerbit.h"
#include "Pengarang.h"

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

#endif // !FUNGSI_H

