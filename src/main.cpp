#include <iostream>
#include "LibraryManager.h"

using namespace std;

int main() {
    LibraryManager lib;
    int choice;

    do {
        cout << "\n===== HE THONG QUAN LY THU VIEN =====\n";
        cout << "1. Quan ly sach (BST/AVL)\n";
        cout << "2. Quan ly doc gia (Hash Table)\n";
        cout << "3. Muon/Tra sach (Linked List)\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
        case 1: lib.menuQuanLySach(); break;
        case 2: lib.menuQuanLyDocGia(); break;
        case 3: lib.menuMuonTra(); break;
        case 0: cout << "Tam biet!\n"; break;
        default: cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 0);

    return 0;
}