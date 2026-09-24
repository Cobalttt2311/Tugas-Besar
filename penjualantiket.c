#include "penjualantiket.h"
#include <stdio.h>
#include <string.h>

void menuutama () {
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
   	printf("\t\t\t\t      ==========================================\n");
	printf("\t\t\t\t      ||  Menu Utama:                         ||\n");
    printf("\t\t\t\t      || 1) Konser                            ||\n");
    printf("\t\t\t\t      || 2) Bioskop                           ||\n");
    printf("\t\t\t\t      || 3) Hotel                             ||\n");
    printf("\t\t\t\t      || 4) Histori Pembelian                 ||\n");
    printf("\t\t\t\t      || 5) Keluar                            ||\n");
    printf("\t\t\t\t      ==========================================\n");
    printf("\t\t\t\t      Silahkan Pilih Menu (1-5) : ");
} 

void menukonser(int pil1,struct Konser *konser) {
    if (pil1 == 1){
    	strcpy(konser->namakonser, "PACE GOD");
		printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||          stage          ||            ||\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||_________________________||            ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                        VIP                       | ||\n");
    	printf("\t\t\t\t|| |                    Rp 300.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                      REGULER                     | ||\n");
    	printf("\t\t\t\t|| |                    Rp 100.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||                                                      ||\n");
    	printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\tSilahkan Pilih Kelas Tiket Yang Anda Inginkan (VIP/REGULER): ");
    	scanf("%s", &konser->kelas);
    	system("cls");
    	printf("Jumlah Tiket yang anda inginkan: ");
    	scanf("%d", &konser->jmltiket);
		system("cls");
		int i = 0;
		while ( i < konser->jmltiket){
		counthargakonser(&(konser->pay), konser->kelas);	
    	system("cls");
    	printf("============================================\n");
    	printf("IDENTITAS PEMBELI TIKET ke-%d\n", i+1);
    	printf("Nama: ");
		scanf(" %[^\n]%*c", konser->nama); 
		printf("Gmail: ");
		scanf(" %[^\n]%*c", konser->gmail); 
		system("cls");
		char jwbko[10];
		printf("====================================================================\n");
		printf("||Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:   \n");
		printf("||Konser : %s                                   \n", konser->namakonser);
		printf("||Nama :%s                                            \n", konser->nama);
		printf("||Jumlah Tiket : %d                               \n", 1);
		printf("||Kelas : %s                                         \n", konser->kelas);
		printf("||Total Harga : %d                                     \n", konser->pay);
		printf("||Gmail : %s                                         \n", konser->gmail);
		printf("====================================================================\n");
		printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?\n");
		scanf("%s",jwbko);
		if (strcmp(jwbko, "Ya") == 0 || strcmp(jwbko, "YA") == 0 || strcmp(jwbko, "ya") == 0 ){
			FILE *filePtr;
			filePtr = fopen("Dt_Konser.txt","a");
			if (filePtr == NULL){
				printf("File tidak dapat dibuka.\n");
				return;
			}
			fprintf(filePtr, "KONSER : %s\n", konser->namakonser);
			fprintf(filePtr, "Nama : %s\n",konser->nama);
			fprintf(filePtr, "Jumlah Tiket : %d\n",1);
			fprintf(filePtr, "Kelas : %s\n", konser->kelas);
			fprintf(filePtr, "Total Harga : %d\n", konser->pay);
			fprintf(filePtr, "Gmail : %s\n", konser->gmail);
			fclose(filePtr);	
		} i++;
		}		
	} else if (pil1 == 2){
    	strcpy(konser->namakonser, "Amar Luicy");
		printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||          stage          ||            ||\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||_________________________||            ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                        VIP                       | ||\n");
    	printf("\t\t\t\t|| |                    Rp 300.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                      REGULER                     | ||\n");
    	printf("\t\t\t\t|| |                    Rp 100.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||                                                      ||\n");
    	printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\tSilahkan Pilih Kelas Tiket Yang Anda Inginkan (VIP/REGULER): ");
    	scanf("%s", &konser->kelas);
    	system("cls");
    	printf("Jumlah Tiket yang anda inginkan: ");
    	scanf("%d", &konser->jmltiket);
		system("cls");
		int i = 0;
		while ( i < konser->jmltiket){
		counthargakonser(&(konser->pay), konser->kelas);	
    	system("cls");
    	printf("============================================\n");
    	printf("IDENTITAS PEMBELI TIKET ke-%d\n", i+1);
    	printf("Nama: ");
		scanf(" %[^\n]%*c", konser->nama); 
		printf("Gmail: ");
		scanf(" %[^\n]%*c", konser->gmail); 
		system("cls");
		char jwbko[10];
		printf("====================================================================\n");
		printf("||Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:   \n");
		printf("||Konser : %s                                   \n", konser->namakonser);
		printf("||Nama :%s                                            \n", konser->nama);
		printf("||Jumlah Tiket : %d                               \n", 1);
		printf("||Kelas : %s                                         \n", konser->kelas);
		printf("||Total Harga : %d                                     \n", konser->pay);
		printf("||Gmail : %s                                         \n", konser->gmail);
		printf("====================================================================\n");
		printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?\n");
		scanf("%s",jwbko);
		if (strcmp(jwbko, "Ya") == 0 || strcmp(jwbko, "YA") == 0 || strcmp(jwbko, "ya") == 0 ){
			FILE *filePtr;
			filePtr = fopen("Dt_Konser.txt","a");
			if (filePtr == NULL){
				printf("File tidak dapat dibuka.\n");
				return;
			}
			fprintf(filePtr, "KONSER : %s\n", konser->namakonser);
			fprintf(filePtr, "Nama : %s\n",konser->nama);
			fprintf(filePtr, "Jumlah Tiket : %d\n",1);
			fprintf(filePtr, "Kelas : %s\n", konser->kelas);
			fprintf(filePtr, "Total Harga : %d\n", konser->pay);
			fprintf(filePtr, "Gmail : %s\n", konser->gmail);
			fclose(filePtr);	
		} i++;
		}
	} else if (pil1 == 3){
    	strcpy(konser->namakonser, "Nalendra Pamungkas");
		printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||          stage          ||            ||\n");
    	printf("\t\t\t\t||             ||                         ||            ||\n");
    	printf("\t\t\t\t||             ||_________________________||            ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                        VIP                       | ||\n");
    	printf("\t\t\t\t|| |                    Rp 300.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||  __________________________________________________  ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |                      REGULER                     | ||\n");
    	printf("\t\t\t\t|| |                    Rp 100.000                    | ||\n");
    	printf("\t\t\t\t|| |                                                  | ||\n");
    	printf("\t\t\t\t|| |__________________________________________________| ||\n");
    	printf("\t\t\t\t||                                                      ||\n");
    	printf("\t\t\t\t==========================================================\n");
    	printf("\t\t\t\tSilahkan Pilih Kelas Tiket Yang Anda Inginkan (VIP/REGULER): ");
    	scanf("%s", &konser->kelas);
    	system("cls");
    	printf("Jumlah Tiket yang anda inginkan: ");
    	scanf("%d", &konser->jmltiket);
		system("cls");
		int i = 0;
		while ( i < konser->jmltiket){
		counthargakonser(&(konser->pay), konser->kelas);	
    	system("cls");
    	printf("============================================\n");
    	printf("IDENTITAS PEMBELI TIKET ke-%d\n", i+1);
    	printf("Nama: ");
		scanf(" %[^\n]%*c", konser->nama); 
		printf("Gmail: ");
		scanf(" %[^\n]%*c", konser->gmail); 
		system("cls");
		char jwbko[10];
		printf("====================================================================\n");
		printf("||Pesanan anda telah dikonfirmasi dengan rincian sebagai berikut:   \n");
		printf("||Konser : %s                                   \n", konser->namakonser);
		printf("||Nama :%s                                            \n", konser->nama);
		printf("||Jumlah Tiket : %d                               \n", 1);
		printf("||Kelas : %s                                         \n", konser->kelas);
		printf("||Total Harga : %d                                     \n", konser->pay);
		printf("||Gmail : %s                                         \n", konser->gmail);
		printf("====================================================================\n");
		printf("Apakah anda yakin dengan pesanan anda (Ya/Tidak) ?\n");
		scanf("%s",jwbko);
		if (strcmp(jwbko, "Ya") == 0 || strcmp(jwbko, "YA") == 0 || strcmp(jwbko, "ya") == 0 ){
			FILE *filePtr;
			filePtr = fopen("Dt_Konser.txt","a");
			if (filePtr == NULL){
				printf("File tidak dapat dibuka.\n");
				return;
			}
			fprintf(filePtr, "KONSER : %s\n", konser->namakonser);
			fprintf(filePtr, "Nama : %s\n",konser->nama);
			fprintf(filePtr, "Jumlah Tiket : %d\n",1);
			fprintf(filePtr, "Kelas : %s\n", konser->kelas);
			fprintf(filePtr, "Total Harga : %d\n", konser->pay);
			fprintf(filePtr, "Gmail : %s\n", konser->gmail);
			fclose(filePtr);	
		} i++;
		}
	}
}

int counthargakonser(int *harga, char *kls) {
    if (strcmp(kls, "VIP") == 0 || strcmp(kls, "vip") == 0 || strcmp(kls, "Vip") == 0) {
   	    *harga = 300000;
    } else if (strcmp(kls, "REGULER") == 0 || strcmp(kls, "Reguler") == 0 || strcmp(kls, "reguler") == 0) {
        *harga = 100000;
    }
}

void paymentkonser(struct Konser *konser){
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
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor Shopee Pay\n", konser->pay);
            printf("\t\t\t\t   0852206619995 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", konser->gmail);
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
                    printf("\t\t\t\t\t\t\t     BRI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BRI\n", konser->pay);
                    printf("\t\t\t\t  1234567890 a.n CNewbie Agen BRI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", konser->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 2:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BSI\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BSI\n", konser->pay);
                    printf("\t\t\t\t  0987654321 a.n CNewbie Agen BSI\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", konser->gmail);
                    printf("\t\t\t\t=====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
                    break;
                case 3:
                	printf("\n");
                    printf("\t\t\t\t\t\t\t     BCA\n  \t\t\t\t  Silahkan Transfer Sejumlah Rp.%d Ke Nomor Rekening BCA\n", konser->pay);
                    printf("\t\t\t\t  1357924680 a.n CNewbie Agen BCA\n");
                    printf("\t\t\t\t  Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", konser->gmail);
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
            printf("\t\t\t\t   Silahkan Transfer Sejumlah Rp.%d Ke Nomor GoPay\n", konser->pay);
            printf("\t\t\t\t   081395719152 a.n CNewbie Agen\n");
            printf("\t\t\t\t   Kami akan mengkonfirmasi pembayaran anda melalui Gmail %s\n", konser->gmail);
            printf("\t\t\t\t  =====Silahkan periksa Gmail anda setelah melakukan pembayaran======\n");
            break;
        default:
            printf("Metode pembayaran tidak valid.\n");
            break;
    }
}
