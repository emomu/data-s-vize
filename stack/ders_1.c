//Stack(Yığıt ya da yığın)
//Doğrusal bir veri yapısıdır.
//Son gelen elemanın ilk önce işlendiği ve listeden ilk olarak çıktığı veri yapısıdır.
//Üstüste koyulan kitaplar gibi düşünülebilir.
//LIFO(Last In First Out) yapısı vardır.

//LIFO
//Last In First Out Son gelen ilk çıkar
//Listeye son giren eleman ilk olarak işlenir ve listeden çıkar.
//hem array'de hem de linked liste uygulanabilir.

//LIFO Kullanım Alanları
//Bellek yönetiminde sayfaların swap(takas) işlemlerinde
//Uygulamaların geri al işlemlerinde
//Tarayıcıların geri-ileri butonlarında

//Array ile Stack Ekleme
//Başlangıç [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 3 -> [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 5 -> [5] [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 7 -> [7] [5] [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 9 -> [9] [7] [5] [3] [ ] [ ] [ ] [ ] [ ] [ ]
// 11 -> [11] [9] [7] [5] [3] [ ] [ ] [ ] [ ] [ ]

//Array ile Stack Çıkarma
// 11 -> [11] [9] [7] [5] [3] [ ] [ ] [ ] [ ] [ ]
// 9 -> [9] [7] [5] [3] [ ] [ ] [ ] [ ] [ ] [ ]
// 7 -> [7] [5] [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 5 -> [5] [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// 3 -> [3] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
//Başlangıç [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]

//Linked List ile Stack
// Linked List ile Stack yapısı gerçekleştirilirken listeye son giren elemanı gösteren işaretçiler kullanılır.Stack yapısına eleman ekleme ve bu yapıdan eleman çıkarma işlemlerinde bu işaretçi güncellenir.
// son giren elemanı gösteren işaretçiye top diyoruz genellikle

//Stack boşken
// top -> NULL

//bir eleman varken
// top -> data

//birden fazla eleman varken
// top -> başlangıçtaki eleman



