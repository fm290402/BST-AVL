#include <stdio.h>
#include <stdlib.h>

#include "datapegawai.h"

int main()
{
	int input;
	Tree T;
	infotype data;

	CreateEmpty (&T, data);
	
	while (1) {
		scanf ("%c", &input);
		switch (input) {		
			case 1: // Print tree
				PrintBagan(T);
			case 2: //Tambah Pegawai
				tambahPegawai();
			case 3: //Delete Pegawai
				hapusPegawai();
			case 4: //Cari pegawai
				cariPegawai();
			case 0: //Exit Aplikasi	
				return 0;
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

