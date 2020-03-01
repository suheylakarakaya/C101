#include <stdio.h>

/* Okudugu buyuk harfi kucuk harfe cevirir.*/

int main(){
	char a;
	printf("Buyuk harf girin: ");
	a = getchar();
	a += 'a'-'A';
	printf("Harfin kucuk hali %c'dir.\n", a);
	system("pause");
	return 0;
}
