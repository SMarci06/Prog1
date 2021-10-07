#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int szam, n = 0, ossz = 0; //Ver: 5.11
	printf("Kérek egy számot!\n"); scanf("%d", &szam);
	while(szam){ //igaz hamist néz, minden szám igaz értékû, csak a 0 hamis
		ossz += szam;
		n++;
		printf("Kérek egy számot!\n"); scanf("%d", &szam);
	}
	printf("A számok összege= %d, az átlaga= %d, a maradék= %d\n", ossz, ossz/n, ossz%n);
}
