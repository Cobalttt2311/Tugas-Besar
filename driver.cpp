#include <stdio.h>
#include <string.h>
#include "headerburuh.h"

int main() {																// Badan utama program		
    int i;
    printf("PENDATAAN KARYAWAN PERUSAHAAN\n\n");
    printf("Masukkan Jumlah Karyawan: ");
    scanf("%d", &i);

    struct Buruh Dt_Buruh[i];
    int n = 0;

    while (n < i) {															// Input Data Karyawan
        printf("Masukkan ID Buruh: ");
        scanf("%s", Dt_Buruh[n].ID_Buruh);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", Dt_Buruh[n].Nama);
        printf("Masukkan Jam Kerja : ");
        scanf("%f", &Dt_Buruh[n].JamKrj);

        Dt_Buruh[n].Upah = CountGaji(Dt_Buruh[n].JamKrj);

        printf("Upah: Rp %.0f\n", Dt_Buruh[n].Upah);

         n++;
    }

    char jawaban[10];														// Fitur search karyawan
	printf("Mau cari karyawan? (Yes / No) ");
    scanf("%s", jawaban);
    do {
        if (strcmp(jawaban, "Yes") == 0) {
            char idCari[10];
            printf("Masukkan ID Karyawan: ");
            scanf("%s", idCari);
            Search(idCari, Dt_Buruh, i);
        } else {
            printf("Kami tidak memahami maksud Anda, Coba ketik 'Yes' atau 'No'.\n");
        } 
    	printf("Mau cari karyawan lagi ? (Yes / No) ");
    	scanf("%s", jawaban);
    } while (strcmp(jawaban, "No") != 0);
    	printf("Terima Kasih , Semoga Hari Anda Menyenangkan!");
    	
    SimpanDataKeFile("data_karyawan.txt", Dt_Buruh, i);
    printf("Data karyawan berhasil disimpan ke dalam file 'data_karyawan.txt'.\n");

    int jumlah_dari_file = 0;
    struct Buruh Dt_Buruh_dari_file[i];
    BacaDataDariFile("data_karyawan.txt", Dt_Buruh_dari_file, &jumlah_dari_file);

    printf("Data karyawan yang dibaca dari file:\n");
    for (int k = 0; k < jumlah_dari_file; k++) {
        printf("ID Buruh: %s\n", Dt_Buruh_dari_file[k].ID_Buruh);
        printf("Nama: %s\n", Dt_Buruh_dari_file[k].Nama);
        printf("Jam Kerja: %.1f Jam\n", Dt_Buruh_dari_file[k].JamKrj);
        printf("Upah: Rp %.0f\n", Dt_Buruh_dari_file[k].Upah);
    }
/ Hasil Ubah
	

    return 0;
}

