//Klavyeden girilen deðere göre haftanýn gününü bulma
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter kullanmamýzý saðlar.
	int gun;
		printf("1 - 7 aralýðýnda sayý giriniz : ");
		scanf("%d",&gun); //Kullanýcý 1 - 7 aralýðýnda deðer girer. 
	switch(gun){
		case(1): printf("%d. gün Pazartesi",gun);
		break;
		case(2): printf("%d. gün Salý" ,gun);
		break;
		case(3): printf("%d. gün Çarþamba" ,gun);
		break;
		case(4): printf("%d. gün Perþembe" ,gun);
		break;
		case(5): printf("%d. gün Cuma" ,gun);
		break;
		case(6): printf("%d. gün Cumartesi" ,gun);
		break;
		case(7): printf("%d. gün Pazar" ,gun);
		break;
		default:	
		printf("Hatalý iþlem yaptýnýz !");
	}
	return 0;
}
