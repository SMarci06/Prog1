#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int szam, n = 0, ossz = 0; //Ver: 5.11
	printf("K�rek egy sz�mot!\n"); scanf("%d", &szam);
	while(szam){ //igaz hamist n�z, minden sz�m igaz �rt�k�, csak a 0 hamis
		ossz += szam;
		n++;
		printf("K�rek egy sz�mot!\n"); scanf("%d", &szam);
	}
	printf("A sz�mok �sszege= %d, az �tlaga= %d, a marad�k= %d\n", ossz, ossz/n, ossz%n);
}
