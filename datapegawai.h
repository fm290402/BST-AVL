#ifndef DATAPEGAWAI_H
#define DATAPEGAWAI_H

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL

/*  Struktur Data untuk menyimpan informasi pegawai
    Berisi atribut nama bertipe String dan jabatan bertipe String */
typedef struct {
    char nama[64];
    int id;
} pegawai;

/*  Alias Pegawai */
typedef pegawai infotype;

/*  Struktur Data untuk menyimpan node pada Tree
    Berisi atribut info bertipe infotype(pegawai), left bertipe pointer address, right bertipe pointer address */
typedef struct tElmtNode *address;
typedef struct tElmtNode {
    infotype info;
    address left;
    address right;
} ElmtNode;

typedef struct {
    address root;
} BSTree;

/** MANAJEMEN MEMORI **/
/*  
    */
address Alokasi(infotype data);

void Dealokasi(address node);

/** KONSTRUKTOR **/
/*  Pembuatan Tree Kosong
    I.S. : Sembarang
    F.S. : Terbentuk Tree kosong, yaitu (T)->root == NIL */
void BuatBagan(BSTree *T);

/* Mengetahui apakah Tree kosong atau tidak
   Author : Nisa Hauna
   Mengirimkan true jika Tree kosong dan False jika Tree tidak kosong
*/
boolean CekBaganKosong(BSTree T);

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Non Rekursif ]
    Modified by : Sobri Waskito Aji
    Sumber : http://informatika.unsyiah.ac.id/irvanizam/teaching/SD/bst.pdf
    I.S   : Tree Root boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi curNode */
void TambahPegawai(BSTree *T, infotype data);

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Rekursif Double Pointer ]
    Modified by : Sobri Waskito Aji
    Sumber : https://socs.binus.ac.id/2017/05/10/implementasi-insert-pada-binary-search-tree-dengan-single-dan-double-pointer/
    I.S   : (*root) boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi (*root) */
void TambahPegawaiRec2(address *root, infotype data);

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Rekursif Single Pointer ]
    Modified by : Sobri Waskito Aji
    Sumber : https://socs.binus.ac.id/2017/05/10/implementasi-insert-pada-binary-search-tree-dengan-single-dan-double-pointer/
    I.S   : Tree boleh tidak memiliki root, (root) boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi (root) */
void TambahPegawaiRec(BSTree *T, address root, infotype data);

/*  Traversal PreOrder
    Author : Kiki Rizki
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara PreOrder : akar, kiri, kanan */
void Preorder(address root);

/*  Traversal InOrder
    Author : Fadhil Muhammad
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara InOrder : kiri, akar, kanan */
void InOrder(address root);

/*  Traversal PostOrder
    Author : 
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara InOrder : kiri, kanan, akar */
void PostOrder(address root);

/*  Hapus Bagan
    Author : Algi
    I.S. : 
    F.S. :  */
void HapusBagan(BSTree *T);

void PrintBagan(BSTree T);

#endif