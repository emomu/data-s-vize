//birden fazla değişkeni tek bir yapı içerisnde kullanmanı sağlayan bir veri yapısıdır 
//struct veri yapısına benzemektedir
//herhangi bir dilde değişken oluştururken hafızada özel alan tanımlanır ve o alanı sadece o değişken kullanabilir diğer değişkenler o alana müdahale edemez
//struct veri yapısında da aynı mevzu vardır
//union veri yapısında ise aynı alanı birden fazla değişken kullanabilir
//hafızada en çok yer kaplayan değişken kadar alan oluşturulur ve uniondaki değişkenlerin hepsi ortak alanı kullanır
//bu sebeple aynı anda 1den fazla değişken çalışamaz bir tane çalışabilir
#include <stdio.h>
#include <string.h>

union ogrenci{
    char isim[30];
    int no;
    float ortalama;
};

typedef union{
    char isim[20];
    int yas;
}ogretmen; 


int main(){
    printf("Boyut : %d\n",sizeof(union ogrenci));

    union ogrenci o;
    strcpy(o.isim,"Emirhan Soylu");
    printf("Isim : %s\n",o.isim);


    o.no = 123;
    printf("No : %d\n",o.no);
    
    o.ortalama = 85.5;
    printf("Ortalama : %.2f\n",o.ortalama);

    //Typedef ile Kullanim
    //union ogretmen yerine direkt ogretmen yazdim
    ogretmen ogr;
    strcpy(ogr.isim,"Yusuf Gokkaya");
    printf("Isim : %s\n",ogr.isim);
    ogr.yas = 21;
    printf("Yas : %d\n",ogr.yas);
    //iki kere print yazamıyorsun unionda çünkü her değişken bir alan kullanıyor 
    //bu sebeple bir değişkeni kullanırken diğer değişkeni kullanamazsın

    return 1;
}