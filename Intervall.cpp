#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b, c; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("Kérem az intervallum alsó határát!\n"); scanf("%d", &a);
	printf("Kérem az intervallum felsõ határát!\n"); scanf("%d", &b);
	printf("Kérek egy számot!\n"); scanf("%d", &c);
	if (c < a){
		printf("A szám az intervallum alatt van!");
	}
	else{ if (c > b){
		  	 printf("A szám az intervallum felett van!");
		  }
		  else{
		  	printf("A szám az intervallumban van!");
		  }
	}
}
