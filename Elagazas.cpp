#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b ,c; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("K�rem a h�romsz�g h�rom oldal�t!\n");
	printf("K�rem az a oldalt:\n"); scanf("%d", &a);
	printf("K�rem a b oldalt:\n"); scanf("%d", &b);
	printf("K�rem a c oldalt:\n"); scanf("%d", &c);
	if(a + b > c && b + c > a && a + c > b){
		printf("A h�romsz�g szerkeszthet�!");
	}
	else{
		printf("A h�romsz�g nem szerkeszthet�!");
	}
}
