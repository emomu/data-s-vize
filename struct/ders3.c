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
    takim t1;
    strcpy(t1.takimAdi, "Galatasaray");
    t1.kurulus = 1905;
    oyuncu o1;
    strcpy(o1.oyuncuAdi, "Arda Turan");
    o1.yas = 33;
    o1.takim = t1;

    printf("Oyuncu Adi: %s\n", o1.oyuncuAdi);
    printf("Yas: %d\n", o1.yas);
    printf("Takim Adi: %s\n", o1.takim.takimAdi);
    printf("Takim Kurulus: %d\n", o1.takim.kurulus);

    return 1;
}