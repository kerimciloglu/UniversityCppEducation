//Klavyeden girilen de�ere g�re haftan�n g�n�n� bulma
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter kullanmam�z� sa�lar.
	int gun;
		printf("1 - 7 aral���nda say� giriniz : ");
		scanf("%d",&gun); //Kullan�c� 1 - 7 aral���nda de�er girer. 
	switch(gun){
		case(1): printf("%d. g�n Pazartesi",gun);
		break;
		case(2): printf("%d. g�n Sal�" ,gun);
		break;
		case(3): printf("%d. g�n �ar�amba" ,gun);
		break;
		case(4): printf("%d. g�n Per�embe" ,gun);
		break;
		case(5): printf("%d. g�n Cuma" ,gun);
		break;
		case(6): printf("%d. g�n Cumartesi" ,gun);
		break;
		case(7): printf("%d. g�n Pazar" ,gun);
		break;
		default:	
		printf("Hatal� i�lem yapt�n�z !");
	}
	return 0;
}
