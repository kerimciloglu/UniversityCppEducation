//1-100 aras�ndaki tek say�lar� bulma
#include<stdio.h>
int main(){
	int i;
		for(i=1; i<=100; i++){
			if (i%2==1){ //�ift say�lar� bulmak i�in ise ==1 olan yeri ==0 yapmal�y�z.
				printf("1 - 100 arasindaki tek sayilar : %d \n", i );
			}
		}
	return 0;
}
