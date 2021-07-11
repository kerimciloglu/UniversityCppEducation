//1-100 arasındaki tek sayıları bulma
#include<stdio.h>
int main(){
	int i;
		for(i=1; i<=100; i++){
			if (i%2==1){ //çift sayıları bulmak için ise ==1 olan yeri ==0 yapmalıyız.
				printf("1 - 100 arasindaki tek sayilar : %d \n", i );
			}
		}
	return 0;
}
