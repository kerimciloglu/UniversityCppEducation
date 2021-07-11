//100'den 0'a kadar (azalarak) 15'e tam bölünen sayýlar

#include<stdio.h>
int main(){
	int i;
	for(i=100; i>=15; i--){
		if(i%15==0){
			printf("100 - 0 arasinda 15'e tam bolunen sayilar : %d \n",i);
		}
	}
	return 0;
}
