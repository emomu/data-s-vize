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
    takim *takim;
} oyuncu;

int main(){
    takim *tk = (takim*)malloc(sizeof(takim));
    strcpy(tk->takimAdi, "Galatasaray");
    tk->kurulus = 1905;

    oyuncu ft;
    strcpy(ft.oyuncuAdi, "Arda Turan");
    ft.yas = 33;
    ft.takim = tk;

    printf("Oyuncu Adi: %s\n", ft.oyuncuAdi);
    printf("Yas: %d\n", ft.yas);
    printf("Takim Adi: %s\n", ft.takim->takimAdi);
    printf("Takim Kurulus: %d\n", ft.takim->kurulus);
    return 1;
}