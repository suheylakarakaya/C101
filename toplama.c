/*İki tamsayiyi(integer) toplayan programdir*/
#include <stdio.h>

int main() {
	int sayi1, sayi2, toplam;
	printf("Sayilari girin: ");
	scanf("%d%d",&sayi1,&sayi2);
	toplam = sayi1 + sayi2;
	printf("Toplamin degeri %d'dir.\n", toplam); 
	system("pause");
	return 0;
}
