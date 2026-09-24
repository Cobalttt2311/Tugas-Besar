#include "penjualantiket.h"
#include <stdio.h>
#include <string.h>

void historibioskop(const char *namaFile) {
    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[1000];
    printf("Riwayat Pembelian dari Bioskop %s:\n", namaFile);

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void historikonser(const char *namaFile) {
    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[1000];
    printf("Riwayat Pembelian dari Konser %s:\n", namaFile);

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void historihotel(const char *namaFile) {
    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[1000];
    printf("Riwayat Pembelian dari Hotel %s:\n", namaFile);

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

