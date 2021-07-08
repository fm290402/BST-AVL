#include "datapegawai.h"
#include <stdio.h>

/* MANAJEMEN MEMORI
/*  Menghasilkan address hasil alokasi sebuah Node
    Author : M Aryadipura
	Jika alokasi berhasil, maka address tidak Nil
	P->info=data, P->left=Nil, P->right=Nil
	Jika alokasi gagal, mengembalikan Nil */
address Alokasi(infotype data) {
    address P;
	P = (address)malloc(sizeof(ElmtNode));
	if (P != Nil) {
		P->info = data;
		P->left = Nil;
		P->right = Nil;
	}
	return P;
}

/** KONSTRUKTOR **/
/*  Pembuatan Tree Kosong
	Author : Caturiani PB
    I.S. : Sembarang
    F.S. : Terbentuk Tree kosong, yaitu (T)->root == NIL */
void BuatBagan(BSTree *T) {
	*T = Nil;
}

/* Mengetahui apakah Tree kosong atau tidak
   Author : Nisa Hauna
   Mengirimkan true jika Tree kosong dan False jika Tree tidak kosong
*/
bool CekBaganKosong(BSTree T){
	if (T == Nil){
		return true;
	} else {
		return false;
	}
}

/*  Traversal InOrder
    Author : Fadhil Muhammad
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara InOrder : kiri, akar, kanan */
void InOrder(BSTree T){
	if (T != Nil){
		InOrder(root->left);
		printf("%d ", root->id);
		InOrder(root->right);
	}
}
