#include "datapegawai.h"
#include <stdio.h>

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
