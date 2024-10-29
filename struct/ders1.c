#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct kitap
{
    char kitapAdi[30];
    float fiyat;
    int sayfa;
};

typedef struct
{
    char yazarAdi[30];
    int yas;
} yazar;

int main()
{
    // Direct
    struct kitap kitap1;
    strcpy(kitap1.kitapAdi, "C Programlama");
    kitap1.fiyat = 50.0;
    kitap1.sayfa = 350;

    printf("Kitap Adi: %s\n", kitap1.kitapAdi);
    printf("Fiyat: %.2f\n", kitap1.fiyat);
    printf("Sayfa: %d\n", kitap1.sayfa);

    // Undirect (Pointer yardımıyla,dolaylı olarak)

    struct kitap *kitap2 = (struct kitap *)malloc(sizeof(struct kitap));
    strcpy(kitap2->kitapAdi, "C++ Programlama");
    kitap2->fiyat = 60.0;
    kitap2->sayfa = 450;

    printf("Kitap Adi: %s\n", kitap2->kitapAdi);
    printf("Fiyat: %.2f\n", kitap2->fiyat);
    printf("Sayfa: %d\n", kitap2->sayfa);

    // Typedef Kullanım
    yazar yazar1;
    strcpy(yazar1.yazarAdi, "Emirhan Soylu");
    yazar1.yas = 22;

    printf("Yazar Adi: %s\n", yazar1.yazarAdi);
    printf("Yas: %d\n", yazar1.yas);

    // Typedef Undirect (Pointer yardımıyla,dolaylı olarak)
    yazar *yazar2 = (yazar *)malloc(sizeof(yazar));
    strcpy(yazar2->yazarAdi, "Yusuf Gokkaya");
    yazar2->yas = 21;
    printf("Yazar Adi: %s\n", yazar2->yazarAdi);
    printf("Yas: %d\n", yazar2->yas);

    return 1;
}