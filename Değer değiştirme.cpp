// 2 de�i�kenin yerini de�i�tirme
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter kullanmam�z� sa�lar.
	int x, y, temp;
	printf("X' in de�erini giriniz  : "); //Kullan�c� x de�i�keninin de�erini giriyor.
	scanf("%d",&x);
	printf("Y'nin de�erini giriniz  : "); //Kullan�c� y de�i�keninin de�erini giriyor.
	scanf("%d",&y);
printf("*****************************************************************************************\n");	//g�r�nt� s�sleme
	temp=x;
	x=y;
	y=temp;
printf("*****************************************************************************************\n");	//g�r�nt� s�sleme
	printf("X' in yeni de�eri  : %d\n",x); // Yeni X de�eri
	printf("Y'nin yeni de�eri  : %d",y); // Yeni Y de�eri
	
return 0;
}
