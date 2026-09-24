#include "penjualantiket.h"
#include <stdio.h>
#include <string.h>

void menubioskop(int pilbio, struct Bioskop *bioskop) {
    if (pilbio == 1) {
        strcpy(bioskop->namafilm, "Azab : tertimpa pohon mangga");
        printf("\t\t\t\tJumlah Tiket yang anda inginkan: ");
        scanf("%d", &bioskop->jmltiket);
        system("cls");
        int i = 0;
        int kelas1 = 0, kelas2 = 0, kelas3 = 0;

        while (i < bioskop->jmltiket) {
            system("cls");
            printf("==========================================================\n");
            printf("||                  ___________________                 ||\n");
            printf("|| ___________             LAYAR             _________  ||\n");
            printf("||                                                      ||\n");
            printf("||    |1A|  |1B|  |1C|  |1D|  |1E|  |1F|  |1G|  |1H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |2A|  |2B|  |2C|  |2D|  |2E|  |2F|  |2G|  |2H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |3A|  |3B|  |3C|  |3D|  |3E|  |3F|  |3G|  |3H|    ||\n");
            printf("||                                                      ||\n");
            printf("==========================================================\n");
            printf("Silahkan Pilih Tempat Duduk Yang Anda Inginkan :");
            scanf("%s", bioskop->kelas);

            if (strcmp(bioskop->kelas, "1A") == 0 || strcmp(bioskop->kelas, "1B") == 0 || strcmp(bioskop->kelas, "1C") == 0) {
                kelas1++;
                bioskop->pay = 50000;
            } else if (strcmp(bioskop->kelas, "2A") == 0 || strcmp(bioskop->kelas, "2B") == 0 || strcmp(bioskop->kelas, "2C") == 0) {
                kelas2++;
                bioskop->pay = 75000;
            } else if (strcmp(bioskop->kelas, "3A") == 0 || strcmp(bioskop->kelas, "3B") == 0 || strcmp(bioskop->kelas, "3C") == 0) {
                kelas3++;
                bioskop->pay = 100000;
            }
            counthargabioskop(&(bioskop->pay), bioskop->kelas, &(bioskop->totharga), &kelas1, &kelas2, &kelas3);
            system("cls");
            printf("============================================\n");
            printf("IDENTITAS PEMBELI TIKET ke-%d\n", i + 1);
            printf("Nama: ");
            scanf(" %[^\n]%*c", bioskop->nama);
            printf("Gmail: ");
            scanf(" %[^\n]%*c", bioskop->gmail);
            system("cls");
            char jwbbio[10];
            printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?");
            scanf("%s", jwbbio);
            if (strcmp(jwbbio, "Ya") == 0 || strcmp(jwbbio, "ya") == 0 || strcmp(jwbbio, "YA") == 0) {
                FILE *filePtr;
                filePtr = fopen("Dt_Bioskop.txt", "a");
                if (filePtr == NULL) {
                    printf("File tidak dapat dibuka.\n");
                    return;
                }
                fprintf(filePtr, "=========================================");
                fprintf(filePtr, "Judul Film : %s\n", bioskop->namafilm);
                fprintf(filePtr, "Nama : %s\n", bioskop->nama);
                fprintf(filePtr, "Jumlah Tiket : %d\n", 1);
                fprintf(filePtr, "Kelas : %s\n", bioskop->kelas);
                fprintf(filePtr, "Total Harga : %d\n", bioskop->pay);
                fprintf(filePtr, "Gmail : %s\n", bioskop->gmail);
                fprintf(filePtr, "=========================================");
                fclose(filePtr);

                printf("====================================================================\n");
                printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
                printf("Judul Film : %s\n", bioskop->namafilm);
                printf("Nama :%s\n", bioskop->nama);
                printf("Jumlah Tiket : %d\n", 1);
                printf("Kelas : %s\n", bioskop->kelas);
                printf("Total Harga : %d\n", bioskop->pay);
                printf("Gmail : %s\n", bioskop->gmail);
                printf("====================================================================\n");
                char pencet;
                printf("Lanjutkan (Ketik Ya atau 1) : ");
                scanf("%s", &pencet);
                i++;
            }
        }
    } else if (pilbio == 2){
        strcpy(bioskop->namafilm, "Ada Apa Dengan Pace");
        printf("\t\t\t\tJumlah Tiket yang anda inginkan: ");
        scanf("%d", &bioskop->jmltiket);
        system("cls");
        int i = 0;
        int kelas1 = 0, kelas2 = 0, kelas3 = 0;

        while (i < bioskop->jmltiket) {
            system("cls");
            printf("==========================================================\n");
            printf("||                  ___________________                 ||\n");
            printf("|| ___________             LAYAR             _________  ||\n");
            printf("||                                                      ||\n");
            printf("||    |1A|  |1B|  |1C|  |1D|  |1E|  |1F|  |1G|  |1H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |2A|  |2B|  |2C|  |2D|  |2E|  |2F|  |2G|  |2H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |3A|  |3B|  |3C|  |3D|  |3E|  |3F|  |3G|  |3H|    ||\n");
            printf("||                                                      ||\n");
            printf("==========================================================\n");
            printf("Silahkan Pilih Tempat Duduk Yang Anda Inginkan :");
            scanf("%s", bioskop->kelas);

            if (strcmp(bioskop->kelas, "1A") == 0 || strcmp(bioskop->kelas, "1B") == 0 || strcmp(bioskop->kelas, "1C") == 0) {
                kelas1++;
                bioskop->pay = 50000;
            } else if (strcmp(bioskop->kelas, "2A") == 0 || strcmp(bioskop->kelas, "2B") == 0 || strcmp(bioskop->kelas, "2C") == 0) {
                kelas2++;
                bioskop->pay = 75000;
            } else if (strcmp(bioskop->kelas, "3A") == 0 || strcmp(bioskop->kelas, "3B") == 0 || strcmp(bioskop->kelas, "3C") == 0) {
                kelas3++;
                bioskop->pay = 100000;
            }
            counthargabioskop(&(bioskop->pay), bioskop->kelas, &(bioskop->totharga), &kelas1, &kelas2, &kelas3);
            system("cls");
            printf("============================================\n");
            printf("IDENTITAS PEMBELI TIKET ke-%d\n", i + 1);
            printf("Nama: ");
            scanf(" %[^\n]%*c", bioskop->nama);
            printf("Gmail: ");
            scanf(" %[^\n]%*c", bioskop->gmail);
            system("cls");
            char jwbbio[10];
            printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?");
            scanf("%s", jwbbio);
            if (strcmp(jwbbio, "Ya") == 0 || strcmp(jwbbio, "ya") == 0 || strcmp(jwbbio, "YA") == 0) {
                FILE *filePtr;
                filePtr = fopen("Dt_Bioskop.txt", "a");
                if (filePtr == NULL) {
                    printf("File tidak dapat dibuka.\n");
                    return;
                }
                fprintf(filePtr, "=========================================");
                fprintf(filePtr, "Judul Film : %s\n", bioskop->namafilm);
                fprintf(filePtr, "Nama : %s\n", bioskop->nama);
                fprintf(filePtr, "Jumlah Tiket : %d\n", 1);
                fprintf(filePtr, "Kelas : %s\n", bioskop->kelas);
                fprintf(filePtr, "Total Harga : %d\n", bioskop->pay);
                fprintf(filePtr, "Gmail : %s\n", bioskop->gmail);
                fprintf(filePtr, "=========================================");
                fclose(filePtr);

                printf("====================================================================\n");
                printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
                printf("Judul Film : %s\n", bioskop->namafilm);
                printf("Nama :%s\n", bioskop->nama);
                printf("Jumlah Tiket : %d\n", 1);
                printf("Kelas : %s\n", bioskop->kelas);
                printf("Total Harga : %d\n", bioskop->pay);
                printf("Gmail : %s\n", bioskop->gmail);
                printf("====================================================================\n");
                char pencet;
                printf("Lanjutkan (Ketik Ya atau 1) : ");
                scanf("%s", &pencet);
                i++;
            }
        }
	} else if (pilbio == 3){
        strcpy(bioskop->namafilm, "Opet the Adventure");
        printf("\t\t\t\tJumlah Tiket yang anda inginkan: ");
        scanf("%d", &bioskop->jmltiket);
        system("cls");
        int i = 0;
        int kelas1 = 0, kelas2 = 0, kelas3 = 0;

        while (i < bioskop->jmltiket) {
            system("cls");
            printf("==========================================================\n");
            printf("||                  ___________________                 ||\n");
            printf("|| ___________             LAYAR             _________  ||\n");
            printf("||                                                      ||\n");
            printf("||    |1A|  |1B|  |1C|  |1D|  |1E|  |1F|  |1G|  |1H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |2A|  |2B|  |2C|  |2D|  |2E|  |2F|  |2G|  |2H|    ||\n");
            printf("||                                                      ||\n");
            printf("||    |3A|  |3B|  |3C|  |3D|  |3E|  |3F|  |3G|  |3H|    ||\n");
            printf("||                                                      ||\n");
            printf("==========================================================\n");
            printf("Silahkan Pilih Tempat Duduk Yang Anda Inginkan :");
            scanf("%s", bioskop->kelas);

            if (strcmp(bioskop->kelas, "1A") == 0 || strcmp(bioskop->kelas, "1B") == 0 || strcmp(bioskop->kelas, "1C") == 0 || strcmp(bioskop->kelas, "1D") == 0 || strcmp(bioskop->kelas, "1E") == 0 || strcmp(bioskop->kelas, "1F") == 0 || strcmp(bioskop->kelas, "1G") == 0 || strcmp(bioskop->kelas, "1H") == 0) {
                kelas1++;
                bioskop->pay = 50000;
            } else if (strcmp(bioskop->kelas, "2A") == 0 || strcmp(bioskop->kelas, "2B") == 0 || strcmp(bioskop->kelas, "2C") == 0 || strcmp(bioskop->kelas, "2D") == 0 || strcmp(bioskop->kelas, "2E") == 0 || strcmp(bioskop->kelas, "2F") == 0 || strcmp(bioskop->kelas, "2G") == 0 || strcmp(bioskop->kelas, "2H") == 0) {
                kelas2++;
                bioskop->pay = 75000;
            } else if (strcmp(bioskop->kelas, "3A") == 0 || strcmp(bioskop->kelas, "3B") == 0 || strcmp(bioskop->kelas, "3C") == 0 || strcmp(bioskop->kelas, "3D") == 0 || strcmp(bioskop->kelas, "3E") == 0 || strcmp(bioskop->kelas, "3F") == 0 || strcmp(bioskop->kelas, "3G") == 0 || strcmp(bioskop->kelas, "3H") == 0) {
                kelas3++;
                bioskop->pay = 100000;
            }
            counthargabioskop(&(bioskop->pay), bioskop->kelas, &(bioskop->totharga), &kelas1, &kelas2, &kelas3);
            system("cls");
            printf("============================================\n");
            printf("IDENTITAS PEMBELI TIKET ke-%d\n", i + 1);
            printf("Nama: ");
            scanf(" %[^\n]%*c", bioskop->nama);
            printf("Gmail: ");
            scanf(" %[^\n]%*c", bioskop->gmail);
            system("cls");
            char jwbbio[10];
            printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?");
            scanf("%s", jwbbio);
            if (strcmp(jwbbio, "Ya") == 0 || strcmp(jwbbio, "ya") == 0 || strcmp(jwbbio, "YA") == 0) {
                FILE *filePtr;
                filePtr = fopen("Dt_Bioskop.txt", "a");
                if (filePtr == NULL) {
                    printf("File tidak dapat dibuka.\n");
                    return;
                }
                fprintf(filePtr, "=========================================");
                fprintf(filePtr, "Judul Film : %s\n", bioskop->namafilm);
                fprintf(filePtr, "Nama : %s\n", bioskop->nama);
                fprintf(filePtr, "Jumlah Tiket : %d\n", 1);
                fprintf(filePtr, "Kelas : %s\n", bioskop->kelas);
                fprintf(filePtr, "Total Harga : %d\n", bioskop->pay);
                fprintf(filePtr, "Gmail : %s\n", bioskop->gmail);
                fprintf(filePtr, "=========================================");
                fclose(filePtr);

                printf("====================================================================\n");
                printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
                printf("Judul Film : %s\n", bioskop->namafilm);
                printf("Nama :%s\n", bioskop->nama);
                printf("Jumlah Tiket : %d\n", 1);
                printf("Kelas : %s\n", bioskop->kelas);
                printf("Total Harga : %d\n", bioskop->pay);
                printf("Gmail : %s\n", bioskop->gmail);
                printf("====================================================================\n");
                char pencet;
                printf("Lanjutkan (Ketik Ya atau 1) : ");
                scanf("%s", &pencet);
                i++;
            }
        }
	}
}

int counthargabioskop(int *harga, char *kls, int *total, int *satu, int *dua, int *tiga) {
    if (strcmp(kls, "1A") == 0 || strcmp(kls, "1B") == 0 || strcmp(kls, "1C") == 0 || strcmp(kls, "1D") == 0 || strcmp(kls, "1E") == 0 || strcmp(kls, "1F") == 0 || strcmp(kls, "1G") == 0 || strcmp(kls, "1H") == 0) {
        *total = *total + (50000 * *satu);
    } else if (strcmp(kls, "2A") == 0 || strcmp(kls, "2B") == 0 || strcmp(kls, "2C") == 0 || strcmp(kls, "2D") == 0 || strcmp(kls, "2E") == 0 || strcmp(kls, "2F") == 0 || strcmp(kls, "2G") == 0 || strcmp(kls, "2H") == 0) {
        *total = *total + (75000 * *dua);
    } else if (strcmp(kls, "3A") == 0 || strcmp(kls, "3B") == 0 || strcmp(kls, "3C") == 0 || strcmp(kls, "3D") == 0 || strcmp(kls, "3E") == 0 || strcmp(kls, "3F") == 0 || strcmp(kls, "3G") == 0 || strcmp(kls, "3H") == 0) {
        *total = *total + (100000 * *tiga);
    }
}

void paymentbioskop(struct Bioskop *bioskop){
    int cash;
    system("cls");
    printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
    printf("\t\t\t\t\t  Metode Pembayaran :\n");
    printf("\t\t\t\t\t  1) ShopeePay\n");
    printf("\t\t\t\t\t  2) Mobile Banking\n");
    printf("\t\t\t\t\t  3) GoPay\n");
    printf("\n");
    printf("\t\t\t\t\t  Pilih Metode Pembayaran (1-3): ");
    scanf("%d", &cash);
    system("cls");
    switch (cash) {
        case 1:
        	printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
            printf("\t\t\t\t                          ShopeePay                                    \n");
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor Shopee Pay\n", bioskop->totharga);
            printf("\t\t\t\t   0852206619995 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", bioskop->gmail);
            printf("\t\t\t\t  =====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
            break;
        case 2:
        	printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
            printf("\t\t\t\t\t  Mobile Banking\n");
            printf("\t\t\t\t\t  1. BRI\n");
            printf("\t\t\t\t\t  2. BSI\n");
            printf("\t\t\t\t\t  3. BCA\n");
            printf("\t\t\t\t\t  Pilih Bank untuk Transfer (1-3):");
            int bankChoice;
            scanf("%d", &bankChoice);
            switch (bankChoice) {
                case 1:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BRI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BRI\n", bioskop->totharga);
                    printf("\t\t\t\t  1234567890 a.n CNewbie Agen BRI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", bioskop->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 2:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BSI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BSI\n", bioskop->totharga);
                    printf("\t\t\t\t  0987654321 a.n CNewbie Agen BSI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", bioskop->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 3:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BCA\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BCA\n", bioskop->totharga);
                    printf("\t\t\t\t  1357924680 a.n CNewbie Agen BCA\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", bioskop->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                default:
                    printf("Pilihan bank tidak valid.\n");
                    break;
            }
            break; 
        case 3:
            printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
            printf("\t\t\t\t                           GoPay                                      \n");
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor GoPay\n", bioskop->totharga);
            printf("\t\t\t\t   081395719152 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", bioskop->gmail);
            printf("\t\t\t\t  =====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n"); 
            break;
        default:
            printf("Metode pembayaran tidak valid.\n");
            break;
    }
}
