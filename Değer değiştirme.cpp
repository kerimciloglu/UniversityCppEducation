// 2 deðiþkenin yerini deðiþtirme
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter kullanmamýzý saðlar.
	int x, y, temp;
	printf("X' in deðerini giriniz  : "); //Kullanýcý x deðiþkeninin deðerini giriyor.
	scanf("%d",&x);
	printf("Y'nin deðerini giriniz  : "); //Kullanýcý y deðiþkeninin deðerini giriyor.
	scanf("%d",&y);
printf("*****************************************************************************************\n");	//görüntü süsleme
	temp=x;
	x=y;
	y=temp;
printf("*****************************************************************************************\n");	//görüntü süsleme
	printf("X' in yeni deðeri  : %d\n",x); // Yeni X deðeri
	printf("Y'nin yeni deðeri  : %d",y); // Yeni Y deðeri
	
return 0;
}
