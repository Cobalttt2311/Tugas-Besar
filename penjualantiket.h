#ifndef PENJUALANTIKET_H
#define PENJUALANTIKET_H

struct Konser {
    char nama[100];
    char gmail[100];
    int jmltiket;
    char kelas[100];
    char namakonser[100];
    int pay;
    int totharga;
};

struct Bioskop {
    char nama[100];
    char gmail[100];
    int jmltiket;
    char kelas[100];
    char namafilm[100];
    int pay;
    int totharga;
};

struct Hotel {
    char tanggal[100];
    int jmlkamar;
    char kelas[100];
    char nama[100];
    char gmail[100];
    int pay;
    char kamar[100];
    char namahotel[100];
    int total;
};

void menuutama();
void menukonser(int pil1, struct Konser konser[]);
int counthargakonser(int *harga, char *kls);
void paymentkonser(struct Konser *konser);
void menubioskop(int pilbio, struct Bioskop *bioskop);
void paymentbioskop(struct Bioskop *bioskop);
int counthargabioskop(int *harga, char *kls, int *total, int *satu, int *dua, int *tiga);
void menuhotel(int pilih, struct Hotel *hotel);
int counthargahotel(int *pay, char *kls, int *tot, int *satu, int *dua);
void paymenthotel(struct Hotel *hotel);
void historibioskop(const char *namaFile);
void historikonser(const char *namaFile);
void historihotel(const char *namaFile);

#endif
