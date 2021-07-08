#include "datapegawai.h"
#include <stdio.h>

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
