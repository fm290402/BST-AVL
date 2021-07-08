#include <stdio.h>
#include <stdlib.h>

#include "datapegawai.h"
#include "datapegawai.c"

void addPegawai() {
	infotype X;
	
	printf ("Nama Pegawai :\n ");
	scanf ("%[^\n]", X.nama);
	fflush(stdin);
	printf ("ID Pegawai : \n");
	scanf ("%d", &X.id);
	fflush(stdin);
	
	TambahPegawai(&root,X);
}

void removePegawai() {
	infotype X;
	
	printf ("ID Pegawai : \n");
	scanf ("%d", &X.id)
		
	HapusPegawai(&root, address node);
}

void searchPegawai() {
	
	infotype X;
	
	printf ("ID Pegawai yang ingin dihapus : \n");
	scanf ("%d", &X.id)
		
	CariPegawaiDenganID(P, id);
}



int main()
{
	int ch;
	Tree T;
	infotype data;

	CreateEmpty (&T, data);
	
	while (1) {
		scanf ("%c", &ch);
		switch (ch) {		
			case 1: // Print tree
				PrintBagan(T);
			case 2: //Tambah Pegawai
				addPegawai();
			case 3: //Delete Pegawai
				removePegawai();
			case 4: //Cari pegawai
				searchPegawai();
			case 0: //Exit Aplikasi	
				return 0;
		}	
	}
}
