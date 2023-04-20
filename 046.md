#### Arkadaş Sayılar *(amicable numbers / friendly numbers)*

*x* ve *y* pozitif tamsayılar olmak üzere, eğer *x* sayısının çarpanları toplamı *y* sayısına, ve aynı zamanda *y* sayısının çarpanları toplamı *x* sayısına eşit ise, bu sayılar *“arkadaştır”*.
Örneğin *220* ve *284* arkadaş sayılardır:

```
220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
284 => 1 + 2 + 4 + 71 + 142 = 220
```
Kendisine gönderilen iki tamsayının arkadaş olup olmadıklarını sınayan, __are_friends__ isimli işlevi tanımlayın:
```
int are_friends(int number1, int number2);
```
Yazdığınız işlevi aşağıdaki arkadaş sayı çiftleri ile test edebilirsiniz:
```
220 284                         
1184 1210
2620 2924
5020 5564
6232 6368
10744 10856
12285 14595
17296 18416
63020 76084
66928 66992
67095 71145
69615 87633
79750 88730
100485 124155
122265 139815
122368 123152
141664 153176
142310 168730
171856 176336
176272 180848
185368 203432
196724 202444
```
