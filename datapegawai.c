#ifndef BINTREE_C
#define BINTREE_C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datapegawai.h"

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

/*  Membuat Tree kosong
    Author : Catur
    I.S. : Tree root kosong
    F.S. : Tree root menunjuk ke Nil
    */
void BuatBagan(BSTree *T) {
    T->root = Nil;
}

/* Mengetahui apakah Tree kosong atau tidak
   Author : Nisa Hauna
   Mengirimkan true jika Tree kosong dan False jika Tree tidak kosong
*/
boolean CekBaganKosong(BSTree T){
	if(T.root == Nil){
		return true;
	} else {
		return false;
	}
}

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Non Rekursif ]
    Modified by : Sobri Waskito Aji
    Sumber : http://informatika.unsyiah.ac.id/irvanizam/teaching/SD/bst.pdf
    I.S   : Tree Root boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi curNode */
void TambahPegawai(BSTree *T, infotype data) {
    address newNode, curNode, prevNode;
    
    curNode = T->root;
    newNode = Alokasi(data);
    if(newNode == Nil ) {
        return;
    }

    if(CekBaganKosong((*T))) {
        T->root = newNode;
    } else {
       while(curNode != Nil) {
           prevNode = curNode;
           if(data.id <= curNode->info.id) {
               curNode = curNode->left;
           } else {
               curNode = curNode->right;
           }
       }

       if(data.id <= prevNode->info.id) {
           prevNode->left = newNode;
       } else {
           prevNode->right = newNode;
       }
    }
}

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Rekursif Double Pointer ]
    Modified by : Sobri Waskito Aji
    Sumber : https://socs.binus.ac.id/2017/05/10/implementasi-insert-pada-binary-search-tree-dengan-single-dan-double-pointer/
    I.S   : (*root) boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi (*root) */
void TambahPegawaiRec2(address *root, infotype data) {
    address newNode;
    
    newNode = Alokasi(data);
    
    if((*root) == Nil) {
        *root = newNode;
    } else if(data.id <= (*root)->info.id) {
        TambahPegawaiRec2(&(*root)->left,data);
    } else {
        TambahPegawaiRec2(&(*root)->right,data);
    }
}

/*  Menambahkan Node baru ke dalam Tree dengan aturan BST [ Rekursif Single Pointer ]
    Modified by : Sobri Waskito Aji
    Sumber : https://socs.binus.ac.id/2017/05/10/implementasi-insert-pada-binary-search-tree-dengan-single-dan-double-pointer/
    I.S   : Tree boleh tidak memiliki root, (root) boleh kosong
    F.S   : newNode ditambahkan sebagai node baru ke dalam Tree pada posisi (root) */
void TambahPegawaiRec(BSTree *T, address root, infotype data) {
    address newNode;
    
    newNode = Alokasi(data);
    if(CekBaganKosong(*T)) {
        printf("Buat Tree baru, Node : %d\n",newNode->info.id);
        T->root = newNode;
        return;
    }
    
    if(root == Nil) {
        root = newNode;
    } else if(data.id <= root->info.id && root->left == Nil) {
        root->left = newNode;
    } else if(data.id > root->info.id && root->right == Nil) {
        root->right = newNode;
    } else if(data.id <= root->info.id) {
        TambahPegawaiRec(T, root->left,data);
    } else {
        TambahPegawaiRec(T, root->right,data);
    }
}

/*  Traversal PreOrder
    Author : Kiki Rizki
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara PreOrder : akar, kiri, kanan */
void Preorder(address root) {
    address P;

    P = root;
	if (P != Nil) {
		printf("%d %s\n", root->info.id, root->info.nama);
		Preorder(P->left);
		Preorder(P->right);
	}
}

/*  Traversal InOrder
    Author : Fadhil Muhammad
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara InOrder : kiri, akar, kanan */
void InOrder(address root){
	if(root != Nil){
		InOrder(root->left);
		printf("%d %s\n", root->info.id, root->info.nama);
		InOrder(root->right);
	}
}

/*  Traversal PostOrder
    Author : 
    I.S. : T terdefinisi
    F.S. : semua simpul T sudah diproses secara InOrder : kiri, kanan, akar */
void PostOrder(address root){
	if(root != Nil){
		PostOrder(root->left);
		PostOrder(root->right);
        printf("%d %s\n", root->info.id, root->info.nama);
	}
}

void PrintBagan(BSTree T) {
    InOrder(T.root);
}

#endif