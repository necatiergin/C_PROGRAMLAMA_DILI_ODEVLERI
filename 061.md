#### Bu sorumuz koşullu derlemeye _(conditional compiling)_ yönelik. Aşağıdaki _C_ programı çalıştırıldığında ekran çıktısı ne olur?

```
#include <stdio.h>

int main()
{
	int x =  -1;

#if x > -1
	printf("A");
#else
	printf("B");
#endif
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__</br>
+ Sentaks hatası (derleme zamanı hatası)
+ Tanımsız davranış. _(undefined behavior)_
+ Derleyiciye göre değişir. _(unspecified behavior / implementation defined)_
