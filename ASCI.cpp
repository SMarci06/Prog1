#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	printf("Kérek egy karaktert: "); scanf("%c", &c);
	printf("Karakter: '%c' - kód %d\n", c, c);
	if (c>='0' && c<='9') printf("szám\n");
	else printf("nem szám\n");
	switch (c){
		case '0': printf("Nulla\n"); break;
		case '1': printf("Egy\n"); break;
		case '2': printf("Kettõ\n"); break;
		case '3': printf("Három\n"); break;
		case '4': printf("Négy\n"); break;
		case '5': printf("Öt\n"); break;
		case '6': printf("Hat\n"); break;
		case '7': printf("Hét\n"); break;
		case '8': printf("Nyolc\n"); break;
		case '9': printf("Kilenc\n"); break;
		default: printf("nem szám"); break;
	}
}
