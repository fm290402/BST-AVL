#ifndef DATAPEGAWAI_H
#define DATAPEGAWAI_H

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL

/*  Struktur Data untuk menyimpan informasi pegawai
    Berisi atribut nama bertipe String dan jabatan bertipe String */
typedef struct {
    int id;
    char nama[64];
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

/** KONSTRUKTOR **/
/*  Pembuatan Tree Kosong
    I.S. : Sembarang
    F.S. : Terbentuk Tree kosong, yaitu (T)->root == NIL */
void CreateTree(BSTree *T);

/* Mengetahui apakah Tree kosong atau tidak
   Author : Nisa Hauna
   Mengirimkan true jika Tree kosong dan False jika Tree tidak kosong
*/
bool CekBaganKosong(BSTree T);

#endif
