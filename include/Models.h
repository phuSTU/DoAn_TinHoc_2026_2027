#ifndef MODELS_H
#define MODELS_H

#include <string>

using namespace std;

struct Sach {
    string isbn;
    string tenSach;
    string theLoai;
    string tacGia;
    int soLuong;
};

struct DocGia {
    string cmnd;
    string hoTen;
    string ngaySinh;
    string gioiTinh;
};

struct PhieuMuon {
    string maPhieu;
    string cmnd;
    string isbn;
    string ngayMuon;
    string ngayTra; // Dự kiến
    bool daTra;
};

#endif