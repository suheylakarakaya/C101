#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	char secim;
	int m,n,p,akillicekim,ilkcekim;
	printf("TAS TOPLAMA OYUNUNA HOSGELDINIZ...\nKac tas kullanilacak?: ");
	scanf("%d",&n);
	printf("Her hamlede maksimum kac tane tas toplanabilir?: ");
	scanf("%d",&m);	
	printf("Oyuna kim baslayacak (Bilgisayar (B) / Kullanici (K))? ");
	scanf("%s",&secim);
	
	akillicekim=(n-1)%(m+1);
	if(secim=='B' || secim=='b'){
		if(akillicekim==0){
			ilkcekim=rand()%m+1;
			printf("B: %d\n",ilkcekim);
			n-=ilkcekim;
		}
		else{
			printf("B: %d\n",akillicekim);
			n-=akillicekim;
		}
	}
	if(secim=='K' || secim== 'k'){
		printf("K: ");scanf("%d",&p);										
		while(p>m){														
				printf("DIKKAT! MAKSIMUM TAS SAYISINI ASTINIZ!\n");			/* Girilen Sayi Maks'tan Buyuk Oldugu Surece Tekrar Kullanicidan Deger Alinacak*/
				printf("K: ");scanf("%d",&p);
			}
		n-=p;
	}

	while(secim=='B' || secim=='b'){
		while(n!=1 && n>0){
			printf("K: ");scanf("%d",&p);
			while(p>m){														/* Girilen Sayi Maks'tan Buyuk Oldugu Surece Tekrar Kullanicidan Deger Alinacak*/
				printf("DIKKAT! MAKSIMUM TAS SAYISINI ASTINIZ!\n");
				printf("K: ");scanf("%d",&p);
			}
			n-=p;

			if(n==1){
				printf("Oyun bitti. KULLANICI kazandi...");
				break;
			}
			if(akillicekim==0){
				p=rand()%m+1;
			}
			else{
				p=m+1-p;
			}
			printf("B: %d\n",p);
			n-=p;

			if(n==1){
				printf("Oyun bitti. BILGISAYAR kazandi...");
				break;
			}
		}
/**/		if(n!=1){														/* n=1 olmadan döngüden çýkýlýyorsa demek ki taþ bitmiþtir.*/
			printf("Kazanan Olmadan Tas Bitti!");
			break;
		}		
		
	}
	while(secim=='K' || secim=='k'){
		while(n!=1){
		
			akillicekim=(n-1)%(m+1);
			if(akillicekim==0){
				p=rand()%m+1;
				printf("B: %d\n",p);
				n-=p;
			}
			else{
				printf("B: %d\n",akillicekim);
				n-=akillicekim;

			}
			
			if(n==1){
				printf("Oyun bitti. BILGISAYAR kazandi...");
				break;
			} 
			
			printf("K: ");scanf("%d",&p);
			
				while(p>m){													
					printf("DIKKAT! MAKSIMUM TAS SAYISINI ASTINIZ!\n");
					printf("K: ");scanf("%d",&p);
				}
			n-=p;
			
			
			

			if(n==1) {
				printf("Oyun bitti. KULLANICI kazandi...");
				break;
			}

		}
/**/		if(n!=1){														/* n=1 olmadan döngüden çýkýlýyorsa demek ki taþ bitmiþtir.*/
			printf("Kazanan Olmadan Tas Bitti!");
			break;
		}

	}
	system("pause");
	return 0;
}
