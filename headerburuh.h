#ifndef headerburuh_h
#define headerburuh_h


struct Buruh {																// Identifikasi variabel komposit bertipe buruh					
    char ID_Buruh[10];
    char Nama[100]; 
    float JamKrj;
    float Upah;
};

float CountGaji(float JamKrj);
void Search(char id[], struct Buruh data_buruh[], int jml);
void SimpanDataKeFile(char namaFile[], struct Buruh data_buruh[], int jml);
void BacaDataDariFile(char namaFile[], struct Buruh data_buruh[], int *jml);

#endif
