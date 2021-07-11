//Bankamatik iþlemleri
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter kullanmamýzý saðlar.
	int bakiye, islem, sonuc, p_yatir, p_cek, p_ode;
		printf("Lütfen bakiyenizi giriniz : "); //Kullanýcýnýn bakiye bilgisini alýr. 
		scanf("%d",&bakiye);
	printf("-------------------------------------------------------------------------------\n");	
		menu:
		printf("Yapmak istediðiniz iþlemi seçiniz. \n"); //Kullanýcýdan yapýlacak islem numarasýný istiyoruz.
		printf("	Para Yatýrma iþlemi     : 1 \n");
		printf("	Para Çekme iþlemi       : 2 \n");
		printf("	Hesap iþlemleri         : 3 \n");
		printf("	Ödeme iþlemleri         : 4 \n");
		printf("	Çýkýþ                   : 5 \n");
	printf("-------------------------------------------------------------------------------\n");
		printf("Seçtiðiniz iþlem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");
	switch(islem){

	case (1):
		printf("Lütfen yatýrmak istediðiniz miktarý giriniz : ");
		scanf("%d", &p_yatir);
		sonuc = bakiye + p_yatir;		
		printf("Mevcut bakiyeniz : %d TL",sonuc); //Para yatýrdýktan sonraki mevcut bakiyeyi gösterir.
		break;	

	case (2):
		printf("Lütfen çekmek istediðiniz miktarý giriniz : ");
		scanf("%d", &p_cek);
		sonuc = bakiye - p_cek;		
			if(bakiye < p_cek){
				printf("HATA! Bu iþlemi gerçekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
			}
			else{
				printf("Mevcut bakiyeniz : %d TL",sonuc); //Para çektikten sonraki mevcut bakiyeyi gösterir.
			}
		break;	

	case (3):
		printf("Yapmak istediðiniz iþlemi seçiniz. \n");
		printf("	Kredi Baþvuru iþlemi    : 1 \n");
		printf("	Kart Ýptal iþlemi       : 2 \n");
		printf("	Bakiye Sorgulama islemi : 3 \n");
	printf("-------------------------------------------------------------------------------\n");	
		printf("Seçtiðiniz iþlem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");	
			switch(islem){
				case (1):
					printf("Kredi baþvurunuz alýnmýþtýr. Bizi tercih ettiðiniz için teþekkür ederiz. \n");
					break;	
				case (2):
					printf("Kart Ýptal baþvurunuz alýnmýþtýr. Yine bekleriz. \n");
					break;	
				case (3):
					printf("Bakiyeniz : %d \n",bakiye);
					break;
				default:	
					printf("Hatalý iþlem yaptýnýz !");	
						}	
		break;	

	case (4):
		printf("Ödeme yapmak istediðiniz kurumu seçiniz. \n");
		printf("	Elektrik    : 1 \n");
		printf("	Su          : 2 \n");
		printf("	Ýnternet    : 3 \n");
		printf("	Telefon     : 4 \n");
		printf("	ÖSYM        : 5 \n");
	
	printf("-------------------------------------------------------------------------------\n");	
		printf("Seçtiðiniz iþlem : "); 
		scanf("%d",&islem);
	printf("-------------------------------------------------------------------------------\n");	
			switch(islem){
				case (1):
					printf("Elektrik ödemeniz alýnmýþtýr. Lütfen ödenecek tutarý giriniz. Ardýndan ENTER tuþuna basýnýz : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu iþlemi gerçekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
				}
						else{
							printf("Ödemeniz onaylanmýþtýr. Mevcut bakiyeniz : %d TL",sonuc); //Ödeme sonrasý mevcut bakiyeyi gösterir.
				}
					break;	
		
				case (2):
					printf("Su ödemeniz alýnmýþtýr. Lütfen ödenecek tutarý giriniz. Ardýndan ENTER tuþuna basýnýz : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu iþlemi gerçekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
				}
						else{
							printf("Ödemeniz onaylanmýþtýr. Mevcut bakiyeniz : %d TL",sonuc); //Ödeme sonrasý mevcut bakiyeyi gösterir.
				}
					break;	
				case (3):
					printf("Ýnternet ödemeniz alýnmýþtýr. Lütfen ödenecek tutarý giriniz. Ardýndan ENTER tuþuna basýnýz : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu iþlemi gercekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
				}
						else{
							printf("Ödemeniz onaylanmýþtýr. Mevcut bakiyeniz : %d TL",sonuc); //Ödeme sonrasý mevcut bakiyeyi gösterir.
				}
					break;
				case (4):
					printf("Telefon ödemeniz alýnmýþtýr. Lütfen ödenecek tutarý giriniz. Ardýndan ENTER tuþuna basýnýz : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu iþlemi gerçekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
				}
						else{
							printf("Ödemeniz onaylanmýþtýr. Mevcut bakiyeniz : %d TL",sonuc); //Ödeme sonrasý mevcut bakiyeyi gösterir.
				}
					break;	
				case (5):
					printf("ÖSYM ödemeniz alýnmýþtýr. Lütfen ödenecek tutarý giriniz. Ardýndan ENTER tuþuna basýnýz : ");
					scanf("%d", &p_ode);
					sonuc = bakiye - p_ode;		
						if(bakiye < p_ode){
							printf("HATA! Bu iþlemi gerçekleþtiremiyoruz! Lütfen bakiyenizden fazla deðer girmeyiniz."); //Bakiyeden fazla deðer girince hata verir.
				}
						else{
							printf("Ödemeniz onaylanmýþtýr. Baþarýlar dileriz! Mevcut bakiyeniz : %d TL",sonuc); //Ödeme sonrasý mevcut bakiyeyi gösterir.
				}
					break;		
				default:	
					printf("Hatalý iþlem yaptýnýz !");	
		}	
		break;	
	
	case (5):
		printf("Çýkýþ iþleminiz baþarýyla gerçekleþtirilmiþtir."); //Kullanýcý çýkýþ yapmýþtýr.
		break;	

	default:	
		printf("Hatalý iþlem yaptýnýz !");
	return 0;
				}
	
}


