#include "LibraryManager.h"
#include <fstream>
#include <iostream>

using namespace std;

// --- FILE I/O (Đọc/Ghi nhị phân) ---
void LibraryManager::saveData() {
    // Ghi file Sách nhị phân
    ofstream outFile(fileSach, ios::binary);
    if (outFile.is_open()) {
        // Demo ghi 1 sách mẫu
        Sach s = { "ISBN001", "Lap trinh C++", "Cong nghe", "NXB Tre", 10 };
        outFile.write(reinterpret_cast<const char*>(&s), sizeof(Sach));
        outFile.close();
        cout << "Da luu du lieu Sach vao file nhi phan!\n";
    }
    else {
        cout << "Loi mo file de ghi!\n";
    }
}

void LibraryManager::loadData() {
    ifstream inFile(fileSach, ios::binary);
    if (inFile.is_open()) {
        Sach s;
        while (inFile.read(reinterpret_cast<char*>(&s), sizeof(Sach))) {
            cout << "Doc tu file: " << s.tenSach << " - SL: " << s.soLuong << endl;
        }
        inFile.close();
    }
}

// --- CÁC HÀM MENU (Khung sườn) ---
void LibraryManager::menuQuanLySach() {
    cout << "--- QUAN LY SACH ---\n";
    cout << "1. Them sach\n2. Luu file\n3. Doc file\n";
    int choice; cin >> choice;
    if (choice == 2) saveData();
    if (choice == 3) loadData();
}

void LibraryManager::menuQuanLyDocGia() {
    cout << "--- QUAN LY DOC GIA ---\n";
    // Code chèn Hash Table sau
}

void LibraryManager::menuMuonTra() {
    cout << "--- MUON TRA SACH ---\n";
    // Code xử lý Linked List sau
}

// Hàm khởi tạo cho HashTable
HashTable::HashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = nullptr;
    }
}