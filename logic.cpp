#include <stdio.h>
#include <string.h>
#include "headerburuh.h"

float CountGaji(float JamKrj) {												// Function untuk meghitung upah buruh	
    if (JamKrj > 17) {
        return (7 * 70000) + (10 * 83500);
    } else if (JamKrj >= 3 && JamKrj <= 7) {
        return JamKrj * 500;
    } else if (JamKrj > 7 && JamKrj <= 17) {
        return (7 * 70000) + ((JamKrj - 7) * 83500);
    } else if (JamKrj < 3) {
        return 0;
    }
}

void Search(char id[], struct Buruh data_buruh[], int jml) {				// Prosedur untuk mencari data buruh berdasarkan ID buruh
    int j = 0;
    while (j < jml) {
        if (strcmp(data_buruh[j].ID_Buruh, id) == 0) {
            printf("Data ditemukan:\n");
            printf("ID Buruh: %s\n", data_buruh[j].ID_Buruh);
            printf("Nama: %s\n", data_buruh[j].Nama);
            printf("Jam Kerja: %.1f Jam\n", data_buruh[j].JamKrj);
            printf("Upah: Rp %.0f\n", data_buruh[j].Upah);
            break;
        } else {
            j++;
        }
    }

    if (j == jml) {
        printf("Data dengan ID '%s' tidak ditemukan.\n", id);
    }
}

void SimpanDataKeFile(char namaFile[], struct Buruh data_buruh[], int jml) {
    FILE *file = fopen(namaFile, "a"); // Gunakan mode "a" untuk menambahkan data ke dalam file yang sudah ada
    if (file == NULL) {
        printf("Gagal membuka file untuk penulisan.\n");
        return;
    }

    for (int k = 0; k < jml; k++) {
        fprintf(file, "ID Buruh: %s\n", data_buruh[k].ID_Buruh);
        fprintf(file, "Nama: %s\n", data_buruh[k].Nama);
        fprintf(file, "Jam Kerja: %.1f\n", data_buruh[k].JamKrj);
        fprintf(file, "Upah: %.0f\n\n", data_buruh[k].Upah);
    }

    fclose(file);
    printf("Data berhasil ditambahkan ke dalam file '%s'.\n", namaFile);
}

void BacaDataDariFile(char namaFile[], struct Buruh data_buruh[], int *jml) {
    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        printf("Gagal membuka file untuk membaca.\n");
        return;
    }

    *jml = 0;
    while (fscanf(file, "ID Buruh: %s\nNama: %[^\n]\nJam Kerja: %f\nUpah: %f\n\n",
                  data_buruh[*jml].ID_Buruh, data_buruh[*jml].Nama,
                  &data_buruh[*jml].JamKrj, &data_buruh[*jml].Upah) != EOF) {
        (*jml)++;
    }

    fclose(file);
    printf("Data berhasil dibaca dari file '%s'.\n", namaFile);
}
