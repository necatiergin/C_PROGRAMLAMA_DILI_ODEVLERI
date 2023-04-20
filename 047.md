#### Collatz sanısı (Collatz conjecture)

1937 yılında *Lothar Collatz*  sıfırdan büyük her tamsayı için aşağıdaki problemi ortaya koydu:

*n* bir tamsayı olmak üzere her yeni n değeri için aşağıdaki kurallar uygulanacak
*n*,  1 değerine eşit ise işlemler sonlandırılıyor.
*n* çift ise yeni *n* değeri olarak *n / 2* alınıyor.
*n* tek ise yeni *n* değeri olarak *3 * n + 1* değeri alınıyor.

__Collatz__ sanısı matematikçilerin tüm çabalarına karşın halen kanıtlanmış değildir.

Kendisine gelen işaretsiz _long long_ türden bir tamsayı için bu serideki tüm sayıları (sayının kendisi ve 1 dahil olmak üzere) standart çıkış akımına yazdıran

```
unsigned int display_collatz(unsigned long long val);
```
işlevini kodlayın.

İşlevin geri dönüş değeri standart çıkış akımına kaç sayı yazıldığı bilgisidir.

Aşağıda _72543_ tamsayısı için oluşturulan serinin _188_ terimi yer alıyor:
```
72543 217630 108815 326446 163223 489670 244835 734506 367253 1101760 
550880 275440 137720 68860 34430 17215 51646 25823 77470 38735 116206 
58103 174310 87155 261466 130733 392200 196100 98050 49025 147076 73538 
36769 110308 55154 27577 82732 41366 20683 62050 31025 93076 46538 23269 
69808 34904 17452 8726 4363 13090 6545 19636 9818 4909 14728 7364 3682 
1841 5524 2762 1381 4144 2072 1036 518 259 778 389 1168 584 292 146 73 
220 110 55 166 83 250 125 376 188 94 47 142 71 214 107 322 161 484 242 
121 364 182 91 274 137 412 206 103 310 155 466 233 700 350 175 526 263 
790 395 1186 593 1780 890 445 1336 668 334 167 502 251 754 377 1132 566 
283 850 425 1276 638 319 958 479 1438 719 2158 1079 3238 1619 4858 2429 
7288 3644 1822 911 2734 1367 4102 2051 6154 3077 9232 4616 2308 1154 577 
1732 866 433 1300 650 325 976 488 244 122 61 184 92 46 23 70 35 106 53 
160 80 40 20 10 5 16 8 4 2 1
```
