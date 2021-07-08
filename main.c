#include <stdio.h>
#include <stdlib.h>

#include "datapegawai.h"

int main()
{
	int input;
	Tree T;
	infotype data;

	CreateEmpty (&T, data);
	
	printf("Bagan Pegawai\n");
	printf("1. Menampilkan bagan\n");
	printf("2. Menambahkan pegawai\n");
	printf("3. Menghapuskan pegawai\n");
	printf("4. Mencari pegawai (ID)\n");
	printf("pilihan anda: ");
	
	while (1) {
		scanf ("%c", &input);
		switch (input) {		
			case 1: 
				PrintBagan(T); // Menampilkan bagan
			case 2: 
				tambahPegawai(); //Menambahkan Pegawai
			case 3: 
				hapusPegawai(); //Menghapus Pegawai
			case 4: 
				cariPegawai(); //Mencari pegawai
			case 0: 	
				return 0; //Keluar aplikasi
		}	
	}
}

void tambahPegawai() {
	infotype a;
	
	printf ("Nama Pegawai :\n ");
	scanf ("%[^\n]", a.nama);
	fflush(stdin);
	printf ("ID Pegawai : \n");
	scanf ("%d", &a.id);
	fflush(stdin);
	
	TambahPegawai(&root,a);
}

void hapusPegawai() {
	infotype a;
	
	printf ("ID Pegawai : \n");
	scanf ("%d", &a.id)
		
	HapusPegawai(&root, address node);
}

void cariPegawai() {
	
	infotype a;
	
	printf ("ID Pegawai yang ingin dihapus : \n");
	scanf ("%d", &a.id)
		
	CariPegawaiID(P, id);
}

