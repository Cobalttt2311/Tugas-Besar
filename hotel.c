#include "penjualantiket.h"
#include <stdio.h>
#include <string.h>

void menuhotel(int pilih, struct Hotel *hotel) {
    if (pilih == 1) {
        strcpy(hotel->namahotel, "Oyo Maranatha");
        printf("\t\t\t\tJumlah kamar yang ingin anda pesan: ");
        scanf("%d", &(hotel->jmlkamar));
        int i = 0;
        int kelas1 = 0, kelas2 = 0;
        hotel->total = 0;
        
        char jwbhot[10];
        while (i < hotel->jmlkamar) {
        	system("cls");
        	printf("========================================================\n");
        	printf("|                        REGULER                       |\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||101|  |102|  |103|  |104|  |105|  |106|  |107|  |108||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||109|  |110|  |111|  |112|  |113|  |114|  |115|  |116||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||117|  |118|  |119|  |120|  |121|  |122|  |123|  |124||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|                                                      |\n");
        	printf("========================================================\n");
        	printf("\n");
        	printf("========================================================\n");
        	printf("|                        DELUXE                        |\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|    201   |   |    202   |   |    203   |  |    204   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|   205    |   |    206   |   |    207   |  |    208   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("========================================================\n");
        	printf("Silahkan Untuk Memilih Kelas Kamar (REGULER/DELUXE):");
			scanf("%s", hotel->kelas);
			printf("\n");
			printf("Silahkan Memilih Nomor Kamar:");
			scanf("%s", hotel->kamar);
            
			if (strcmp(hotel->kelas, "REGULER") == 0) {
                kelas1++;
                hotel->pay += 300000; 
            } else if (strcmp(hotel->kelas, "DELUXE") == 0) {
                kelas2++;
                hotel->pay += 800000; 
            }

            i++;
        }
        system("cls");
        printf("============================================\n");
        printf("IDENTITAS PEMESAN KAMAR\n");
        printf("Nama: ");
        scanf(" %[^\n]%*c", hotel->nama);
        printf("Gmail: ");
        scanf(" %[^\n]%*c", hotel->gmail);
        system("cls");
    	printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) : ?");
        scanf("%s", jwbhot);
        counthargahotel(&(hotel->pay), hotel->kelas, &(hotel->total), &kelas1, &kelas2);
    	if (strcmp(jwbhot, "Ya") == 0 || strcmp(jwbhot, "ya") == 0 || strcmp(jwbhot, "YA") == 0) {
            FILE *filePtr;
            filePtr = fopen("Dt_Hotel.txt", "a");
            if (filePtr == NULL) {
                printf("File tidak dapat dibuka.\n");
                return;
            }
            fprintf(filePtr, "=========================================\n");
            fprintf(filePtr, "Nama Hotel : %s\n", hotel->namahotel );
            fprintf(filePtr, "Tanggal Reservasi : %s\n", hotel->tanggal);
            fprintf(filePtr, "Nama : %s\n", hotel->nama);
            fprintf(filePtr, "Jumlah Kamar : %d\n", hotel->jmlkamar);
            fprintf(filePtr, "Kamar : %s\n", hotel->kamar);
            fprintf(filePtr, "Kelas : %s\n", hotel->kelas);
			fprintf(filePtr, "Total Harga : %d\n", hotel->total);;
            fprintf(filePtr, "Gmail : %s\n", hotel->gmail);
            fprintf(filePtr, "=========================================\n");
            fclose(filePtr);

            printf("====================================================================\n");
            printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
            printf("Nama Hotel : %s\n", hotel->namahotel);
            printf("Tanggal Reservasi : %s\n", hotel->tanggal);
            printf("Nama :%s\n", hotel->nama);
            printf("Jumlah Kamar : %d\n", hotel->jmlkamar);
            printf("Kamar : %s\n", hotel->kamar);
            printf("Kelas : %s\n", hotel->kelas);
            printf("Total Harga : %d\n", hotel->total);
            printf("Gmail : %s\n", hotel->gmail);
            printf("====================================================================\n");
            char pencet;
            printf("Lanjutkan (Ketik Ya atau 1) : ");
            scanf("%c", &pencet);
        	i++;
        }
    } else if (pilih == 2) {
        strcpy(hotel->namahotel, "Red Doors Sarijadi");
        printf("Jumlah kamar yang ingin anda pesan: ");
        scanf("%d", &(hotel->jmlkamar));
        int i = 0;
        int kelas1 = 0, kelas2 = 0;
        hotel->total = 0;
        
        char jwbhot[10];
        while (i < hotel->jmlkamar) {
        	system("cls");
        	printf("========================================================\n");
        	printf("|                        REGULER                       |\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||101|  |102|  |103|  |104|  |105|  |106|  |107|  |108||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||109|  |110|  |111|  |112|  |113|  |114|  |115|  |116||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||117|  |118|  |119|  |120|  |121|  |122|  |123|  |124||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|                                                      |\n");
        	printf("========================================================\n");
        	printf("\n");
        	printf("========================================================\n");
        	printf("|                        DELUXE                        |\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|    201   |   |    202   |   |    203   |  |    204   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|   205    |   |    206   |   |    207   |  |    208   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("========================================================\n");
        	printf("Silahkan Untuk Memilih Kelas Kamar (Deluxe/Reguler):");
			scanf("%s", hotel->kelas);
			printf("\n");
			printf("Silahkan Memilih Nomor Kamar:");
			scanf("%s", hotel->kamar);
            
			if (strcmp(hotel->kelas, "REGULER") == 0) {
                kelas1++;
                hotel->pay += 300000; 
            } else if (strcmp(hotel->kelas, "DELUXE") == 0) {
                kelas2++;
                hotel->pay += 800000; 
            }

            i++;
        }
        system("cls");
        printf("============================================\n");
        printf("IDENTITAS PEMESAN KAMAR\n");
        printf("Nama: ");
        scanf(" %[^\n]%*c", hotel->nama);
        printf("Gmail: ");
        scanf(" %[^\n]%*c", hotel->gmail);
        system("cls");
    	printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) : ?");
        scanf("%s", jwbhot);
        counthargahotel(&(hotel->pay), hotel->kelas, &(hotel->total), &kelas1, &kelas2);
    	if (strcmp(jwbhot, "Ya") == 0 || strcmp(jwbhot, "ya") == 0 || strcmp(jwbhot, "YA") == 0) {
            FILE *filePtr;
            filePtr = fopen("Dt_Hotel.txt", "a");
            if (filePtr == NULL) {
                printf("File tidak dapat dibuka.\n");
                return;
            }
            fprintf(filePtr, "=========================================\n");
            fprintf(filePtr, "Nama Hotel : %s\n", hotel->namahotel );
            fprintf(filePtr, "Tanggal Reservasi : %s\n", hotel->tanggal);
            fprintf(filePtr, "Nama : %s\n", hotel->nama);
            fprintf(filePtr, "Jumlah Kamar : %d\n", hotel->jmlkamar);
            fprintf(filePtr, "Kamar : %s\n", hotel->kamar);
            fprintf(filePtr, "Kelas : %s\n", hotel->kelas);
			fprintf(filePtr, "Total Harga : %d\n", hotel->total);;
            fprintf(filePtr, "Gmail : %s\n", hotel->gmail);
            fprintf(filePtr, "=========================================\n");
            fclose(filePtr);

            printf("====================================================================\n");
            printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
            printf("Nama Hotel : %s\n", hotel->namahotel);
            printf("Tanggal Reservasi : %s\n", hotel->tanggal);
            printf("Nama :%s\n", hotel->nama);
            printf("Jumlah Kamar : %d\n", hotel->jmlkamar);
            printf("Kamar : %s\n", hotel->kamar);
            printf("Kelas : %s\n", hotel->kelas);
            printf("Total Harga : %d\n", hotel->total);
            printf("Gmail : %s\n", hotel->gmail);
            printf("====================================================================\n");
            char pencet;
            printf("Lanjutkan (Ketik Ya atau 1) : ");
            scanf("%c", &pencet);
        	i++;
        }
    } else if (pilih == 3){
        strcpy(hotel->namahotel, "IBIS Bandung ");
        printf("Jumlah kamar yang ingin anda pesan: ");
        scanf("%d", &(hotel->jmlkamar));
        int i = 0;
        int kelas1 = 0, kelas2 = 0;
        hotel->total = 0;
        
        char jwbhot[10];
        while (i < hotel->jmlkamar) {
        	system("cls");
        	printf("========================================================\n");
        	printf("|                        REGULER                       |\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||101|  |102|  |103|  |104|  |105|  |106|  |107|  |108||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||109|  |110|  |111|  |112|  |113|  |114|  |115|  |116||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|_____  _____  _____  _____  _____  _____  _____  _____|\n");
        	printf("||117|  |118|  |119|  |120|  |121|  |122|  |123|  |124||\n");
        	printf("||___|  |___|  |___|  |___|  |___|  |___|  |___|  |___||\n");
        	printf("|                                                      |\n");
        	printf("========================================================\n");
        	printf("\n");
        	printf("========================================================\n");
        	printf("|                        DELUXE                        |\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|    201   |   |    202   |   |    203   |  |    204   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("|___________   ____________   ____________  ___________|\n");
        	printf("|          |   |          |   |          |  |          |\n");
        	printf("|   205    |   |    206   |   |    207   |  |    208   |\n");
        	printf("|__________|   |__________|   |__________|  |__________|\n");
        	printf("========================================================\n");
        	printf("Silahkan Untuk Memilih Kelas Kamar (DELUXE/REGULER):");
			scanf("%s", hotel->kelas);
			printf("\n");
			printf("Silahkan Memilih Nomor Kamar:");
			scanf("%s", hotel->kamar);
            
			if (strcmp(hotel->kelas, "REGULER") == 0 || strcmp(hotel->kelas, "Reguler") == 0) {
                kelas1++;
                hotel->pay += 300000; 
            } else if (strcmp(hotel->kelas, "DELUXE") == 0) {
                kelas2++;
                hotel->pay += 800000; 
            }

            i++;
        }
        system("cls");
        printf("============================================\n");
        printf("IDENTITAS PEMESAN KAMAR\n");
        printf("Nama: ");
        scanf(" %[^\n]%*c", hotel->nama);
        printf("Gmail: ");
        scanf(" %[^\n]%*c", hotel->gmail);
        system("cls");
    	printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) : ?");
        scanf("%s", jwbhot);
        counthargahotel(&(hotel->pay), hotel->kelas, &(hotel->total), &kelas1, &kelas2);
    	if (strcmp(jwbhot, "Ya") == 0 || strcmp(jwbhot, "ya") == 0 || strcmp(jwbhot, "YA") == 0) {
            FILE *filePtr;
            filePtr = fopen("Dt_Hotel.txt", "a");
            if (filePtr == NULL) {
                printf("File tidak dapat dibuka.\n");
                return;
            }
            fprintf(filePtr, "=========================================\n");
            fprintf(filePtr, "Nama Hotel : %s\n", hotel->namahotel );
            fprintf(filePtr, "Tanggal Reservasi : %s\n", hotel->tanggal);
            fprintf(filePtr, "Nama : %s\n", hotel->nama);
            fprintf(filePtr, "Jumlah Kamar : %d\n", hotel->jmlkamar);
            fprintf(filePtr, "Kamar : %s\n", hotel->kamar);
            fprintf(filePtr, "Kelas : %s\n", hotel->kelas);
			fprintf(filePtr, "Total Harga : %d\n", hotel->total);;
            fprintf(filePtr, "Gmail : %s\n", hotel->gmail);
            fprintf(filePtr, "=========================================\n");
            fclose(filePtr);

            printf("====================================================================\n");
            printf("Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:\n");
            printf("Nama Hotel : %s\n", hotel->namahotel);
            printf("Tanggal Reservasi : %s\n", hotel->tanggal);
            printf("Nama :%s\n", hotel->nama);
            printf("Jumlah Kamar : %d\n", hotel->jmlkamar);
            printf("Kamar : %s\n", hotel->kamar);
            printf("Kelas : %s\n", hotel->kelas);
            printf("Total Harga : %d\n", hotel->total);
            printf("Gmail : %s\n", hotel->gmail);
            printf("====================================================================\n");
            char pencet;
            printf("Lanjutkan (Ketik Ya atau 1) : ");
            scanf("%c", &pencet);
        	i++;
    	}
	}
}

int counthargahotel(int *pay, char *kls, int *tot, int *satu, int *dua) {
    *pay = 0;
    *pay = *pay + (300000 * *satu); 
    *pay = *pay + (800000 * *dua); 
    *tot = *pay;
    return *tot;
}

void paymenthotel(struct Hotel *hotel){
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
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor Shopee Pay\n", hotel->pay);
            printf("\t\t\t\t   0852206619995 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", hotel->gmail);
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
                    printf("\t\t\t\t\t\t\t     BRI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BRI\n", hotel->pay);
                    printf("\t\t\t\t  1234567890 a.n CNewbie Agen BRI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", hotel->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 2:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BSI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BSI\n", hotel->pay);
                    printf("\t\t\t\t  0987654321 a.n CNewbie Agen BSI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", hotel->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 3:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BCA\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BCA\n", hotel->pay);
                    printf("\t\t\t\t  1357924680 a.n CNewbie Agen BCA\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", hotel->gmail);
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
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor GoPay\n", hotel->pay);
            printf("\t\t\t\t   081395719152 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", hotel->gmail);
            printf("\t\t\t\t  =====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n"); 
            break;
        default:
            printf("Metode pembayaran tidak valid.\n");
            break;
    }
}
