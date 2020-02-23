//İki sayinin yerinin degistirilmesini saglayan program//
#include <stdio.h>

int main(){
	float sayi1, sayi2;   //float(reel sayilar) 
	float gecici;         
	printf("Iki sayi girin: ");
	scanf("%f%f", &sayi1, &sayi2);
	printf("Sayilarin ilk degerleri: %f %f\n", sayi1, sayi2);
	gecici = sayi1;       
	sayi1 = sayi2;
	sayi2 = gecici;
	printf("Sayilarin son degerleri: %f %f\n", sayi1, sayi2);
	system("pause");
	return 0;
}
