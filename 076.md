İçinde en az bir tane negatif tamsayı olan bir tam sayı dizisi var. Bu dizinin tüm ardışık alt dizileri içinde en büyük kümülatif toplam değerini (maximum subsequence) bulmamız gerekiyor:

Örneğin

```
3  4 -8  1  7 -2
```

dizisinde en büyük toplam değerini veren alt dizi 

```
1 7
```

ve hesaplanacak toplam değeri : 

```
8
```

Aşağıda tanımlanan a dizisinin en büyük alt dizi toplamını hesaplayan bir C programı yazınız:

```
#define			SIZE		100

int a[SIZE] = {
		-258, 225, -350, 323, 6, 829, 804, 732, -346, 289,
		-793, -588, 665, -681, 154, 274, -43, 877, -977, -23,
		530, 385, -514, 154, -373, 62, 790, -174, 184, 375,
		-171, 519, -354, -237, 482, -697, 717, -532, -752, 217,
		-89, -908, -382, 617, -122, 584, 617, -664, -566, 18,
		138, -496, -552, 829, 191, -478, -48, -122, 440, -686,
		256, 372, -987, 36, -872, 171, -953, 500, -603, 613,
		311, -267, -616, -384, -574, -771, -482, -881, -747, 356,
		584, 33, -135, -717, -326, 530, -328, -767, -50, 846,
		894, -499, 48, -265, -327, 574, 670, -642, -932, 84,
	};
}
```

* Kodda ikinci bir dizi kullanmayacaksınız.
* Oluşturduğuz algoritma O(n) karmaşıklığında olmalı
