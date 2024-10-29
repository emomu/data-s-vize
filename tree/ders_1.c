//Verilerin, sanki bir ağaç yapısı oluşturuyormuş gibi sanal olarak birbirine bağlandıkları veri yapılarıdır.
//Hiyerarşik verilerin saklanmasında kullanılır. Doğrusal değildir.
//Ağaç veri yapısındaki veriler arasında ast-üst ilişkisi ya da parent-child ilişkisi vardır. (Flutter referansı)
//Ağaç veri yapısındaki veriler node adı verilen düğümlerde saklanır. Düğümler, edge(kenar) yoluyla birbirine bağlanır.


//           {A}
//          /   \   
//        {B}   {C}
//       /   \  /  \    
//     {D}   {E}{G} {F}

//Node(Düğüm): Ağaç yapısında bulunan her elemana verilen isimdir
// A B C D E F G Node'lardır.

//Root(Kök): Ağacın ilk elemanıdır. En tepesinde bulunan elemanıdır.
//A elemanı ağacın köküdür ROOT'dur.

//Edge(Kenar): İki düğümü yani iki elemanı birbirine bağlayan yapılardır
//A-B , A-C, B-E, B-D vb....

//Child(Çocuk): Bir düğüme bağlı olan alt düğümlere denir.
//B ve C A'nın çocuklarıdır.

//Parent(Ebeveyn): Bir düğüme bağlı olan üst düğüme denir.
//A B ve C'nin ebeveynidir.

//Leaf(Yaprak) : Çocuğu olmayan düğümlere denir.
//D E F G Yaprak düğümlerdir.

//Sibling(Kardeş) : Aynı ebeveyn düğüme bağlı olan düğümlere denir.
// B ve C A'nın düğümleri olduğu için B ve C Kardeştir.


//Depth(Derinlik) : Bir düğümün root(kök) düğüme olan uzaklığına denir. Root'un derinliği 1 olarak kabul edilir.
// A'nın derinliği 1, B ve C'nin derinliği 2, D E F G'nin derinliği 3'tür.


//Nerelerde Kullanılır
// işletim sistemlerinin dosya sistemi bölümlerinde.
// document object model (DOM) yapısında (FLUTTER veya HTML5)
// Ağ yönlendirme işlemlerinde
// Oyunlarda(satranç, dama, sos vb.)
// Json ve Yaml gibi dosyaların işlenmesinde

