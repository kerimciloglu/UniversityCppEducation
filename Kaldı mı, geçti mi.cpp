#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	int not1,not2,not3,toplam_not,ort; //not1-not2-not3-toplam_not-ort deðiþkenlerini tanýmladýk.
		
		tekrar1:	//not yanlýþ girilirse buraya tekrar gelmesi için goto komutu kullanýldý.
		printf("1. Sýnav notunu giriniz : ");
		scanf("%d",&not1); //Kullanýcý sýnav notunu girer.
			if(0<=not1 && not1<=100){ //eðer 1.sýnav notu bu aralýkta ise devam eder. 
			}
			else{	//deðilse notu kullanýcýdan tekrar girmesini ister.
				printf("Lütfen girdiðiniz notu kontrol ediniz! \n");
				goto tekrar1; //goto(git) komutu ile yanlýþ girilen notu tekrar girmesini ister. Notun verilen aralýkta olmasý zorunludur.
			}
	
		tekrar2:	//not yanlýþ girilirse buraya tekrar gelmesi için goto komutu kullanýldý.
		printf("2. Sýnav notunu giriniz : ");
		scanf("%d",&not2); //Kullanýcý sýnav notunu girer.
			if(0<=not2 && not2<=100){ //eðer 2.sýnav notu bu aralýkta ise devam eder.
			}
			else{	//deðilse notu kullanýcýdan tekrar girmesini ister.
				printf("Lütfen girdiðiniz notu kontrol ediniz! \n");
				goto tekrar2; //goto(git) komutu ile yanlýþ girilen notu tekrar girmesini ister. Notun verilen aralýkta olmasý zorunludur.
				
			}
	
		tekrar3:	//not yanlýþ girilirse buraya tekrar gelmesi için goto komutu kullanýldý.
		printf("3. Sýnav notunu giriniz : ");
		scanf("%d",&not3); //Kullanýcý sýnav notunu girer.
			if(0<=not3 && not3<=100){ //eðer 3.sýnav notu bu aralýkta ise devam eder.
			}
			else{	//deðilse notu kullanýcýdan tekrar girmesini ister.
				printf("Lütfen girdiðiniz notu kontrol ediniz! \n");
				goto tekrar3; //goto(git) komutu ile yanlýþ girilen notu tekrar girmesini ister. Notun verilen aralýkta olmasý zorunludur.
			}	

printf("***********************************************************************************************************************\n");					
	
	toplam_not=not1+not2+not3;
	ort=toplam_not/3;
	printf("Sýnavlarýn ortalamasý : %d\n",ort);	
		
			if(ort<50){
				printf("%d ortalama ile dersten kaldýnýz!",ort);
			}
			else{
				printf("%d ortalama ile dersi geçtiniz!",ort);
			}	
	return 0;
}
