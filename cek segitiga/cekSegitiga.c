#include <stdio.h> //pastikan kalian tidak merubah ini 

const char * cekSegitiga(int b1, int b2, int b3){
    const char * segitiga; //digunakan untuk menyimpan str SEGITIGA SAMA KAKI, SEGITIGA SAMA SISI, SEGITIGA SIKU SIKU, SEGITIGA SEMBARANG, dan BUKAN SEGITIGA
    //const char * jangan dihapus/diganti.
    //variabel segitiga adalah return dari section ini

    return segitiga;   
}

int main(){
    int s1, s2, s3;
    printf("===SELAMAT DATANG DI PEMBANDING SEGITIGA===\n");

    printf("Silahkan masukkan panjang sisi 1: ");
    scanf("%d", &s1); 
    
    printf("Silahkan masukkan panjang sisi 2: ");
    scanf("%d", &s2); 
    
    printf("Silahkan masukkan panjang sisi 3: ");
    scanf("%d", &s3); 

    const char * hasil = cekSegitiga(s1, s2, s3);
    printf("bilangan: %d, %d, %d adalah %s\n", s1, s2, s3, hasil);
    
    return 0;
}


//output:
//bilangan: 3, 4, 5 adalah SEGITIGA SIKU SIKU
//bilangan: 1, 2, 3 adalah BUKAN SEGITIGA 
//bilangan: 16, 17, 22 adalah SEGITIGA SEMBARANG
//bilangan: 3, 3, 3 adalah SEGITIGA SAMA SISI
//bilangan: 3, 3, 5 adalah SEGITIGA SAMA KAKI

