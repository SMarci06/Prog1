#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	printf("K�rek egy karaktert: "); scanf("%c", &c);
	printf("Karakter: '%c' - k�d %d\n", c, c);
	if (c>='0' && c<='9') printf("sz�m\n");
	else printf("nem sz�m\n");
	switch (c){
		case '0': printf("Nulla\n"); break;
		case '1': printf("Egy\n"); break;
		case '2': printf("Kett�\n"); break;
		case '3': printf("H�rom\n"); break;
		case '4': printf("N�gy\n"); break;
		case '5': printf("�t\n"); break;
		case '6': printf("Hat\n"); break;
		case '7': printf("H�t\n"); break;
		case '8': printf("Nyolc\n"); break;
		case '9': printf("Kilenc\n"); break;
		default: printf("nem sz�m"); break;
	}
}
