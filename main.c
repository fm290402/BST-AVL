#include <stdio.h>
#include <stdlib.h>
#include "datapegawai.h"

int main() {
    int keyInput;
    BSTree T;
    infotype data;
    
    BuatBagan(&T);

    printf("Bagan Pegawai\n");
	printf("1. Menampilkan bagan\n");
	printf("2. Menambahkan pegawai\n");
	printf("3. Menghapuskan pegawai\n");
	printf("4. Mencari pegawai (ID)\n");
    printf("5. Exit\n");

    do {
        printf("Pilih: "); 
		scanf("%d",&keyInput);

        if(keyInput == 1) {
            PrintBagan(T);
        } else if(keyInput == 2) {
            printf("Nama : "); scanf("%s",data.nama);
            printf("ID : "); scanf("%d",&data.id);

            TambahPegawai(&T,data);
            printf("Data berhasil dimasukkan\n");
            
        } else if(keyInput == 3) {
            // Hapus Pegawai
        } else if(keyInput == 4) {
            // Cari Pegawai
        }else{
        	printf("maaf pilihan tidak ada\n");
		}
    } while(keyInput != 5);
}