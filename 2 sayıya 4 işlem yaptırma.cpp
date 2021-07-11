//2 sayýya 4 iþlem yaptýrma
#include<stdio.h>
int main(){
	int islem,sayi1, sayi2;
		printf("1.sayiyi giriniz : "); //Kullanýcýdan ilk sayýyý girmesini istiyoruz.
		scanf("%d",&sayi1);
		printf("2.sayiyi giriniz : "); //Kullanýcýdan ikinci sayýyý girmesini istiyoruz.
		scanf("%d",&sayi2);

printf("-------------------------------------------------------------------------------\n");

		printf("Yapmak istediginiz islemi seciniz. \n"); //Kullanýcýdan yapýlacak islem numarasýný istiyoruz.
		printf("Toplama islemi icin : 1 \n");
		printf("Cikarma islemi icin : 2 \n");
		printf("Carpma islemi icin  : 3 \n");
		printf("Bolme islemi icin   : 4 \n");
		
		printf("Sectiginiz islem : "); //Kullanýcý sectigi numaraya göre sonucu öðreniyor.
		scanf("%d",&islem);

printf("------------------------------------------------------------------------------- \n");	

	switch(islem){
	
	case (1):
		printf("Sayilarin toplami : %d" ,sayi1 + sayi2);
		break;	
	case (2):
		printf("Sayilarin farki : %d" ,sayi1 - sayi2);
		break;	
	case (3):
		printf("Sayilarin carpimi : %d" ,sayi1 * sayi2);
		break;	
	case (4):
		printf("Sayilarin bolumu : %d" ,sayi1 / sayi2);
		break;				
	default:	
		printf("Hatali islem yaptiniz !");
		
	}
	
	return 0;
}
