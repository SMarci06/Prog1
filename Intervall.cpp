#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b, c; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("K�rem az intervallum als� hat�r�t!\n"); scanf("%d", &a);
	printf("K�rem az intervallum fels� hat�r�t!\n"); scanf("%d", &b);
	printf("K�rek egy sz�mot!\n"); scanf("%d", &c);
	if (c < a){
		printf("A sz�m az intervallum alatt van!");
	}
	else{ if (c > b){
		  	 printf("A sz�m az intervallum felett van!");
		  }
		  else{
		  	printf("A sz�m az intervallumban van!");
		  }
	}
}
