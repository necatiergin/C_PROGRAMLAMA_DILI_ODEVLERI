**Aşağıdaki koda tek bir karakter ekleyeceksiniz ya da koddan tek bir karakteri değiştireceksiniz. Yapılan değişiklikten sonra oluşan C programı derlenip çalıştırıldığında standart çıkış akımına 5 kez**

```
necati
```

yazacak.

Sorunun en az *3* farklı yanıtı olduğunu söylemeliyim. *3* yanıtı da bulmanız gerekiyor.

```
#include <stdio.h>

int main()
{
	int n = 5;

	for (int i = 0; i < n; i--)
		printf("necati\n");

	return 0;
}
```
