#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#include "Models.h"
#include <iostream>
#include <vector>

// --- TUẦN 3: CÂY BST & AVL QUẢN LÝ SÁCH ---
struct NodeBST {
    Sach data;
    NodeBST* left;
    NodeBST* right;
    NodeBST(Sach s) : data(s), left(nullptr), right(nullptr) {}
};

class BST {
public:
    NodeBST* root;
    BST() : root(nullptr) {}
    NodeBST* insert(NodeBST* node, Sach s);
    NodeBST* search(NodeBST* node, string isbn);
};

struct NodeAVL {
    Sach data;
    NodeAVL* left;
    NodeAVL* right;
    int height;
    NodeAVL(Sach s) : data(s), left(nullptr), right(nullptr), height(1) {}
};

class AVL {
private:
    int getHeight(NodeAVL* n);
    int getBalance(NodeAVL* n);
    NodeAVL* rightRotate(NodeAVL* y);
    NodeAVL* leftRotate(NodeAVL* x);
public:
    NodeAVL* root;
    AVL() : root(nullptr) {}
    NodeAVL* insert(NodeAVL* node, Sach s);
};

// --- TUẦN 4: HASH TABLE QUẢN LÝ ĐỘC GIẢ ---
const int TABLE_SIZE = 100;
struct HashNode {
    DocGia data;
    HashNode* next;
    HashNode(DocGia d) : data(d), next(nullptr) {}
};

class HashTable {
private:
    HashNode* table[TABLE_SIZE];
    int hashFunc(string cmnd);
public:
    HashTable();
    void insert(DocGia d);
    DocGia* search(string cmnd);
};

// --- TUẦN 5: LINKED LIST & DYNAMIC ARRAY ---
// Quản lý Phiếu mượn bằng Linked List
struct NodeMuon {
    PhieuMuon data;
    NodeMuon* next;
    NodeMuon(PhieuMuon p) : data(p), next(nullptr) {}
};

class LinkedListMuon {
public:
    NodeMuon* head;
    LinkedListMuon() : head(nullptr) {}
    void add(PhieuMuon p);
};

// Dynamic Array (Vector) quản lý danh sách thể loại
class DynamicArray {
public:
    vector<string> theLoais;
    void add(string tl);
};

#endif
