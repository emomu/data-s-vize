//Türkçeye bağlı liste olarak çevrilmiştir
//Dinamik boyutlu veri yapısıdır
//Linked list yapısında bulunan her bir eleman kendisinden sonraki elemanı işaret eden bir veri içerir


//Linked list ile array'in farkları
// -> Dizilerin boyutları ancak linked list dinamik boyutlara sabittir.
// -> Diziler tanımlanırken boyutları belirtilmelidir. Ancak bağlı listede böyle bir durum söz konusu değildir.
// -> Diziye ait elemanlar bellekte ardaşık olarak saklanır. Bağlı listenin elemanları ise bellekte farklı konumlarda bulunabilirler.
// -> Dizilerde rastgele erişim vardır. Ancak bağlı listelerde sıralı erişim bulunmaktadır.
// -> Dizilerde eleman ekleme ve silme işlemleri zordur. Ancak bağlı listelerde bu işlemler oldukça kolaydır.
// -> Dizilerde aynı türe ait verileri saklarken bağlı listeler farklı türlere ait verileri saklayabilir.


//Linked List Yapısı
// -> Linked list yapısı oluşturulurken listenin başını ve sonunu gösteren işaretçiler kullanılır. Ekleme ve silme işlemleri sonrasında head ve tail güncellenir.
// -> head(first) listenin başı için kullanılır. tail(last) ise listenin sonunu gösterir.


//Linked list boşken
// head -> NULL tail -> NULL

//Linked list 1 eleman varken
// head -> 1 tail -> 1

//Linked list birden fazla eleman varken
// head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL tail -> 5
