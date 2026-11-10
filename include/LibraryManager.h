#ifndef LIBRARY_MANAGER_H
#define LIBRARY_MANAGER_H

#include "DataStructures.h"

class LibraryManager {
private:
    BST bstSach;
    AVL avlSach;
    HashTable hashDocGia;
    LinkedListMuon listMuon;

    // File I/O (Tuần 5)
    string fileSach = "data/sach.dat";
    string fileDocGia = "data/docgia.dat";

public:
    void loadData();
    void saveData();

    // Menu Quản lý
    void menuQuanLySach();
    void menuQuanLyDocGia();
    void menuMuonTra();
};

#endif
