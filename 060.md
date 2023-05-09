#### Aşağıdaki C programı derlenip çalıştırıldığında ekran çıktısı ne olur?

```
#include <stdio.h>

#define  NEC	100

void func(void);

int main()
{
	func();
#ifdef  NEC
#undef  NEC
#endif

}

void func(void)
{
#if defined NEC
	printf("NEC = %d\n", NEC);
#else
	printf("NEC tanimsiz\n");
#endif
}
```

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir. _(implementation defined/specified)_
