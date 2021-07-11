//Bankamatik i�lemleri
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter kullanmam�z� sa�lar.
	int bakiye, islem, sonuc, p_yatir, p_cek, p_ode;
		printf("L�tfen bakiyenizi giriniz : "); //Kullan�c�n�n bakiye bilgisini al�r. 
		scanf("%d",&bakiye);
	printf("-------------------------------------------------------------------------------\n");	
		menu:
		printf("Yapmak istedi�iniz i�lemi se�iniz. \n"); //Kullan�c�dan yap�lacak islem numaras�n� istiyoruz.
		printf("	Para Yat�rma i�lemi     : 1 \n");
		printf("	Para �ekme i�lemi       : 2 \n");
		printf("	Hesap i�lemleri         : 3 \n");
		printf("	�deme i�lemleri         : 4 \n");
		printf("	��k��                   : 5 \n");
	printf("-------------------------------------------------------------------------------\n");
		printf("Se�ti�iniz i�lem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");
	switch(islem){

	case (1):
		printf("L�tfen yat�rmak istedi�iniz miktar� giriniz : ");
		scanf("%d", &p_yatir);
		sonuc = bakiye + p_yatir;		
		printf("Mevcut bakiyeniz : %d TL",sonuc); //Para yat�rd�ktan sonraki mevcut bakiyeyi g�sterir.
		break;	

	case (2):
		printf("L�tfen �ekmek istedi�iniz miktar� giriniz : ");
		scanf("%d", &p_cek);
		sonuc = bakiye - p_cek;		
			if(bakiye < p_cek){
				printf("HATA! Bu i�lemi ger�ekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
			}
			else{
				printf("Mevcut bakiyeniz : %d TL",sonuc); //Para �ektikten sonraki mevcut bakiyeyi g�sterir.
			}
		break;	

	case (3):
		printf("Yapmak istedi�iniz i�lemi se�iniz. \n");
		printf("	Kredi Ba�vuru i�lemi    : 1 \n");
		printf("	Kart �ptal i�lemi       : 2 \n");
		printf("	Bakiye Sorgulama islemi : 3 \n");
	printf("-------------------------------------------------------------------------------\n");	
		printf("Se�ti�iniz i�lem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");	
			switch(islem){
				case (1):
					printf("Kredi ba�vurunuz al�nm��t�r. Bizi tercih etti�iniz i�in te�ekk�r ederiz. \n");
					break;	
				case (2):
					printf("Kart �ptal ba�vurunuz al�nm��t�r. Yine bekleriz. \n");
					break;	
				case (3):
					printf("Bakiyeniz : %d \n",bakiye);
					break;
				default:	
					printf("Hatal� i�lem yapt�n�z !");	
						}	
		break;	

	case (4):
		printf("�deme yapmak istedi�iniz kurumu se�iniz. \n");
		printf("	Elektrik    : 1 \n");
		printf("	Su          : 2 \n");
		printf("	�nternet    : 3 \n");
		printf("	Telefon     : 4 \n");
		printf("	�SYM        : 5 \n");
	
	printf("-------------------------------------------------------------------------------\n");	
		printf("Se�ti�iniz i�lem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");	
			switch(islem){
				case (1):
					printf("Elektrik �demeniz al�nm��t�r. L�tfen �denecek tutar� giriniz. Ard�ndan ENTER tu�una bas�n�z : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu i�lemi ger�ekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
				}
						else{
							printf("�demeniz onaylanm��t�r. Mevcut bakiyeniz : %d TL",sonuc); //�deme sonras� mevcut bakiyeyi g�sterir.
				}
					break;	
		
				case (2):
					printf("Su �demeniz al�nm��t�r. L�tfen �denecek tutar� giriniz. Ard�ndan ENTER tu�una bas�n�z : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu i�lemi ger�ekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
				}
						else{
							printf("�demeniz onaylanm��t�r. Mevcut bakiyeniz : %d TL",sonuc); //�deme sonras� mevcut bakiyeyi g�sterir.
				}
					break;	
				case (3):
					printf("�nternet �demeniz al�nm��t�r. L�tfen �denecek tutar� giriniz. Ard�ndan ENTER tu�una bas�n�z : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu i�lemi gercekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
				}
						else{
							printf("�demeniz onaylanm��t�r. Mevcut bakiyeniz : %d TL",sonuc); //�deme sonras� mevcut bakiyeyi g�sterir.
				}
					break;
				case (4):
					printf("Telefon �demeniz al�nm��t�r. L�tfen �denecek tutar� giriniz. Ard�ndan ENTER tu�una bas�n�z : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu i�lemi ger�ekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
				}
						else{
							printf("�demeniz onaylanm��t�r. Mevcut bakiyeniz : %d TL",sonuc); //�deme sonras� mevcut bakiyeyi g�sterir.
				}
					break;	
				case (5):
					printf("�SYM �demeniz al�nm��t�r. L�tfen �denecek tutar� giriniz. Ard�ndan ENTER tu�una bas�n�z : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu i�lemi ger�ekle�tiremiyoruz! L�tfen bakiyenizden fazla de�er girmeyiniz."); //Bakiyeden fazla de�er girince hata verir.
				}
						else{
							printf("�demeniz onaylanm��t�r. Ba�ar�lar dileriz! Mevcut bakiyeniz : %d TL",sonuc); //�deme sonras� mevcut bakiyeyi g�sterir.
				}
					break;		
				default:	
					printf("Hatal� i�lem yapt�n�z !");	
		}	
		break;	
	
	case (5):
		printf("��k�� i�leminiz ba�ar�yla ger�ekle�tirilmi�tir."); //Kullan�c� ��k�� yapm��t�r.
		break;	

	default:	
		printf("Hatal� i�lem yapt�n�z !");
	return 0;
				}
	
}


