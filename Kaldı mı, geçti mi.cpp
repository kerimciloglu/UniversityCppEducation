#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	int not1,not2,not3,toplam_not,ort; //not1-not2-not3-toplam_not-ort de�i�kenlerini tan�mlad�k.
		
		tekrar1:	//not yanl�� girilirse buraya tekrar gelmesi i�in goto komutu kullan�ld�.
		printf("1. S�nav notunu giriniz : ");
		scanf("%d",&not1); //Kullan�c� s�nav notunu girer.
			if(0<=not1 && not1<=100){ //e�er 1.s�nav notu bu aral�kta ise devam eder. 
			}
			else{	//de�ilse notu kullan�c�dan tekrar girmesini ister.
				printf("L�tfen girdi�iniz notu kontrol ediniz! \n");
				goto tekrar1; //goto(git) komutu ile yanl�� girilen notu tekrar girmesini ister. Notun verilen aral�kta olmas� zorunludur.
			}
	
		tekrar2:	//not yanl�� girilirse buraya tekrar gelmesi i�in goto komutu kullan�ld�.
		printf("2. S�nav notunu giriniz : ");
		scanf("%d",&not2); //Kullan�c� s�nav notunu girer.
			if(0<=not2 && not2<=100){ //e�er 2.s�nav notu bu aral�kta ise devam eder.
			}
			else{	//de�ilse notu kullan�c�dan tekrar girmesini ister.
				printf("L�tfen girdi�iniz notu kontrol ediniz! \n");
				goto tekrar2; //goto(git) komutu ile yanl�� girilen notu tekrar girmesini ister. Notun verilen aral�kta olmas� zorunludur.
				
			}
	
		tekrar3:	//not yanl�� girilirse buraya tekrar gelmesi i�in goto komutu kullan�ld�.
		printf("3. S�nav notunu giriniz : ");
		scanf("%d",&not3); //Kullan�c� s�nav notunu girer.
			if(0<=not3 && not3<=100){ //e�er 3.s�nav notu bu aral�kta ise devam eder.
			}
			else{	//de�ilse notu kullan�c�dan tekrar girmesini ister.
				printf("L�tfen girdi�iniz notu kontrol ediniz! \n");
				goto tekrar3; //goto(git) komutu ile yanl�� girilen notu tekrar girmesini ister. Notun verilen aral�kta olmas� zorunludur.
			}	

printf("***********************************************************************************************************************\n");					
	
	toplam_not=not1+not2+not3;
	ort=toplam_not/3;
	printf("S�navlar�n ortalamas� : %d\n",ort);	
		
			if(ort<50){
				printf("%d ortalama ile dersten kald�n�z!",ort);
			}
			else{
				printf("%d ortalama ile dersi ge�tiniz!",ort);
			}	
	return 0;
}
