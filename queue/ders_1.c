//Doğrusal bir veri yapısıdır.
//İlk gelen elemanın ilk önce işlendiği ve kuyruktan çıktığı veri yapısıdır.
//Günlük hayattaki kuyruklara benzemektedir (ilk gelen ilk hizmet)
//Örneğin bir banka kuyruğunda ilk gelen kişi önce işlem yapar ve kuyruktan çıkar.
//Queue veri yapısı için FIFO yöntemi kullanılır


//FIFO
//First In First Out
//İlk gelen ilk çıkar
//FIFO yöntemi hem array hem de linked list yapısına uygulanabilir.


//FIFO Kullanım alanları
//PIPE yani boru hattı yapılarında
//Disk yönetiminde giriş/çıkış isteklerini planlamada
//Switch router gibi network yapılarındaki veri paketlerinde
//Elektronik devrelerde yazılım ve donanım arası buffer işlemlerinde

//Array(Dizi) ile Queue
//Başlangıç [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
//5 [5] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
//8 [5] [8] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
//12 [5] [8] [12] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
//3 [5] [8] [12] [3] [ ] [ ] [ ] [ ] [ ] [ ]
//7 [5] [8] [12] [3] [7] [ ] [ ] [ ] [ ] [ ]

//Array ile Queue çıkarma işlemi
//Mevcut durum [5] [8] [12] [3] [7] [ ] [ ] [ ] [ ] [ ]
//Çıkarma işlemi sonrası [8] [12] [3] [7] [ ] [ ] [ ] [ ] [ ] [ ]
// [12] [3] [7] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
// [3] [7] [ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]

//Linked list ile Queue 
//Linked list ile Queue işlemleri gerçekleştirilirken kuyruğun başını ve sonunu gösteren işaretçiler kullanılır.Kuyruğa ekleme ve kuyruktan çıkarma işlemlerinde bu işaretçiler güncellenir.
// Kuyruk boşken
// -> front NULL ->rear NULL

//Kuyrukta bir eleman varken
// -> front data ->rear data

//Kuyrukta birden çok eleman varsa


