#include<stdio.h>
int main(){
	int i,sayi;
	for(i=1; i<=5; i++){
	
		printf("Sayi giriniz : ");
		scanf("%d",&sayi);
	
	if(sayi%2==0){
		printf("Girilen sayi cift! \n");
		printf("\n");
	}
	
	else{
		printf("Girilen sayi tek! \n");
		printf("\n");
	}	
}
	return 0;
}
