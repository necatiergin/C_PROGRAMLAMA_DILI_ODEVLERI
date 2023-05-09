#### Aşağıdaki C programı derlenip çalıştırıldığında ekrana ne yazdırılır?

```
#include <stdio.h>

#define  NECO    100
#define  ZERO    0
#define  NONO     


int main()
{
#if NECO
	printf("A");
#endif 

#if ZERO
	printf("B");
#endif 

#if YOKO
	printf("C");
#endif 

#ifdef NECO
	printf("D");
#endif 

#ifdef ZERO
	printf("E");
#endif 

#ifdef NONO
	printf("F");
#endif 

#ifdef YOKO
	printf("G");
#endif 

#ifndef NECO
	printf("H");
#endif 

#ifndef ZERO
	printf("I");
#endif 

#ifndef NONO
	printf("J");
#endif 

#ifndef YOKO
	printf("K");
#endif 

#if YOKO > -1
	printf("L");
#endif 

#if TOKO == YOKO
	printf("M");
#endif 

}
```

**Sorunun yanıtı şu seçeneklerden biri de olabilir:**
+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir.* (implementation defined/specified)*
