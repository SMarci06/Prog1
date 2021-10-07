#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b ,c; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("Kérem a háromszög három oldalát!\n");
	printf("Kérem az a oldalt:\n"); scanf("%d", &a);
	printf("Kérem a b oldalt:\n"); scanf("%d", &b);
	printf("Kérem a c oldalt:\n"); scanf("%d", &c);
	if(a + b > c && b + c > a && a + c > b){
		printf("A háromszög szerkeszthetõ!");
	}
	else{
		printf("A háromszög nem szerkeszthetõ!");
	}
}
