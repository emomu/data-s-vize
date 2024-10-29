#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char takimAdi[30];
    int kurulus;
}takim;


typedef struct {
    char oyuncuAdi[30];
    int yas;
    takim takim;
} oyuncu;

int main(){
    oyuncu oyuncu1;
    strcpy(oyuncu1.oyuncuAdi, "Yusuf Gokkaya");
    oyuncu1.yas = 21;
    strcpy(oyuncu1.takim.takimAdi, "Fenerbahçe");
    oyuncu1.takim.kurulus = 1907;

    printf("Oyuncu Adi: %s\n", oyuncu1.oyuncuAdi);
    printf("Yas: %d\n", oyuncu1.yas);
    printf("Takim Adi: %s\n", oyuncu1.takim.takimAdi);
    printf("Kurulus: %d\n", oyuncu1.takim.kurulus);



    return 1;
}