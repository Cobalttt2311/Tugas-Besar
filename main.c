#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "penjualantiket.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char pencet[100];
	int pilihan;
	
	printf("=====================================\n");
	printf("CNewbie Agen\n");
	printf("Lepaskan Penatmu Bersama Kami!\n");
	printf("=====================================\n");
	scanf("%c",&pencet);
	
	system("cls");
    
    menuutama();
    scanf("%d",&pilihan);
    
	do {
    	switch (pilihan) {
    		case 1:
    			printf("konser");
    			menukonser ();
    			break;
    		case 2:
    			menubioskop ();
    			break;
    		case 3:
    			menuhotel ();
    			break;
    		case 4:
    			historipembelian ();
    			break;
    		case 5:
    			printf("Terima Kasih!\n");
    			break;
    		default:
    			printf("Pilihan Tidak Valid, Silahkan Pilih Menu lagi");
		}
	} while (0);
	
	return 0;   
}
