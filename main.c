#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "penjualantiket.h"

int main(){
	char pencet[100];
	int pilihan;
	int choice;
	struct Konser Dt_Konser[1000];
	struct Bioskop Dt_Bioskop[1000];
	struct Hotel Dt_Hotel[1000];
	char jwb[100];
	
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
	printf("\t\t\t\t\t=====================================\n");
	printf("\t\t\t\t\t||          CNewbie Agent          ||\n");
	printf("\t\t\t\t\t||  Lepaskan Penatmu Bersama Kami! ||\n");
	printf("\t\t\t\t\t=====================================\n");
	scanf("%c",&pencet);
	
	system("cls");
    

    
	do {
		menuutama();
    	scanf("%d",&pilihan);
    	system("cls");
    		if  (pilihan == 1){
    			printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
    			printf("\t\t   ====================================================================================\n");
    			printf("\t\t   ||                                TIKET KONSER                                    ||\n");
    			printf("\t\t   ||                                                                                ||\n");
    			printf("\t\t   || 1) Pace God                                                                    ||\n");
    			printf("\t\t   || Musisi dari tanah Bandung, Konser Pace God akan dilaksanakan 01/01/24          ||\n");
    			printf("\t\t   ||                                                                                ||\n");
    			printf("\t\t   || 2) Amar Luicy                                                                  ||\n");
    			printf("\t\t   || Musisi dari tanah Purwakarta, Konser Amar Luicy akan dilaksanakan 03/02/24     ||\n");
    			printf("\t\t   ||                                                                                ||\n");
    			printf("\t\t   || 3) Nalendra Pamungkas                                                          ||\n");
    			printf("\t\t   || Musisi dari tanah Subang, Konser Nalendra Pamungkas akan dilaksanakan 02/04/24 ||\n");
    			printf("\t\t   ||                                                                                ||\n");
    			printf("\t\t   ====================================================================================\n");
    			printf("\t\t   Silahkan Pilih Tiket Konser Yang Ingin Anda Beli (1-3): ");
    			scanf("%d",&choice);
    			system("cls");
    			menukonser (choice , Dt_Konser);
    			paymentkonser(Dt_Konser);
    		} else if ( pilihan == 2){
    			printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
    			printf("\t\t\t\t\t=====================================\n");
    			printf("\t\t\t\t\t||          TIKET BIOSKOP          ||\n");
    			printf("\t\t\t\t\t||                                 ||\n");
    			printf("\t\t\t\t\t|| 1) Azab : tertimpa pohon mangga ||\n");
    			printf("\t\t\t\t\t|| 2) Ada Apa Dengan Pace          ||\n");
    			printf("\t\t\t\t\t|| 3) Opet the Adventure           ||\n");
    			printf("\t\t\t\t\t||                                 ||\n");
    			printf("\t\t\t\t\t=====================================\n");
    			printf("\t\t\t\tSilahkan Pilih Tiket Film Yang Ingin Anda Beli (1-3):  ");
    			scanf("%d",&choice);
    			menubioskop (choice, Dt_Bioskop);
    			paymentbioskop(Dt_Bioskop);
    		} else if  (pilihan == 3){
    			printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
    		 	printf("\t\t\t\t\t=======================================\n");
    			printf("\t\t\t\t\t||            BOOKING HOTEL          ||\n");
    			printf("\t\t\t\t\t||                                   ||\n");
    			printf("\t\t\t\t\t||  1) Oyo Maranatha                 ||\n");
    			printf("\t\t\t\t\t||  2) Red Doors Sarijadi            ||\n");
    			printf("\t\t\t\t\t||  3) IBIS Bandung                  ||\n");
    			printf("\t\t\t\t\t||                                   ||\n");
    			printf("\t\t\t\t\t=======================================\n");
    			printf("\t\t\t\tSilahkan Pilih Hotel Yang Ingin Anda Reservasi (1-3):  ");
    			scanf("%d",&choice);
    			printf("\t\t\t\tTanggal Reservasi (DD/MM/YYYY) :");
    			scanf("%s",Dt_Hotel->tanggal);
    			menuhotel(choice, Dt_Hotel);
    			paymenthotel(Dt_Hotel);
    		} else if (pilihan == 4){
    			printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
    			printf("\t\t\t\t\t==========================================\n");
    			printf("\t\t\t\t\t||           RIWAYAT PEMBELIAN          ||\n");
    			printf("\t\t\t\t\t||                                      ||\n");
    			printf("\t\t\t\t\t|| 1) Riwayat Pembelian Tiket Konser    ||\n");
    			printf("\t\t\t\t\t|| 2) Riwayat Pembelian Tiket Bioskop   ||\n");
    			printf("\t\t\t\t\t|| 3) Riwayat Pembelian Tiket Hotel     ||\n");
    			printf("\t\t\t\t\t||                                      ||\n");
    			printf("\t\t\t\t\t==========================================\n");
    			printf("\t\t\t\tSilahkan Pilih Riwayat Pembelian Yang Ingin Ditampilkan (1-3) : ");
    			scanf("%d",&choice);
    			system("cls");
    			if (choice == 1){
    				historikonser("Dt_Konser.txt");
    				} else if ( choice == 2) {
    					historibioskop("Dt_Bioskop.txt");
    				} else if (choice == 3) {
    					historihotel("Dt_Hotel.txt");
    				}
    		} else if (pilihan == 5){
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
    			printf("\t\t\t\t   ==================================================\n");
    			printf("\t\t\t\t   || Terima Kasih, Semoga Hari Anda Menyenangkan! ||\n");
    			printf("\t\t\t\t   ||                CNewbie Agent                 ||\n");
    			printf("\t\t\t\t   ==================================================\n");
    			break;
    		} else {
    			printf("Pilihan Tidak Valid, Silahkan Pilih Menu lagi");
			}
		printf("\n\t\t\t\t  Apakah Anda Ingin Kembali Ke Menu Utama (Ya/Tidak)? : ");
		scanf("%s", jwb);
		if (strcmp(jwb, "Ya") == 0 || strcmp(jwb, "YA") == 0 || strcmp(jwb, "ya") == 0 ){
			system("cls");	
		} else {
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
   			printf("\t\t\t\t   ==================================================\n");
   			printf("\t\t\t\t   || Terima Kasih, Semoga Hari Anda Menyenangkan! ||\n");
   			printf("\t\t\t\t   ||                CNewbie Agent                 ||\n");
   			printf("\t\t\t\t   ==================================================\n");
			break;
		}	 
	} while (1);
	
	return 0;   
}
