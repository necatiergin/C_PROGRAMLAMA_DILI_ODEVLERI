#### Aşağıdaki C programı çalıştırıldığında bu programın çıktısı ne olur?

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası _(syntax error)_
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. *(implementation defined/specified)*


```
#include <stdio.h>

int g = 34;

int main()
{
	unsigned int n = sizeof g++ - sizeof ++g + g++;
	printf("%u\n", n);
}
```

