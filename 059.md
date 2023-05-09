#### Aşağıda belirtilen işlevsel makroları `(functional - function-like macros)` tanımlayınız:

+ standart *isupper* işlevinin yerine geçecek *is_upper* isimli makro

+ standart *toupper* işlevinin yerine geçecek *to_upper* isimli makro

+ 3 sayıdan en büyüğünü hesaplayan *max3* isimli makro

+ 4 sayıdan en büyüğünü hesaplayan *max4* isimli makro

+ `clamp` isimli makro:	*clamp(val, low, high)* ifadesinin değeri 
	+ `val <= low ise low`
	+ `val >= high ise high`
	+ `aksi halde val olmalı`

+ _is_triangle_ isimli makro: </br>
```
is_triangle(a, b, c)
````
ifadesinin değeri
+ eğer `a b c` kenar uzunlukları geçerli bir üçgen oluşturuyor ise _1_
+ eğer `a b c` kenar uzunlukları geçerli bir üçgen oluşturmuyor _0_ ise olmalı.
	
