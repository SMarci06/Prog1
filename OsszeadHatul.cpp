#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int szam, n = 0, ossz = 0; //Ver: 5.11
	do{
		printf("K�rek egy sz�mot!\n"); scanf("%d", &szam);
		ossz += szam;
		n++;
	} while(szam);
	n--;
	printf("A sz�mok �sszege= %d, az �tlaga= %d, a marad�k= %d\n", ossz, ossz/n, ossz%n);
}
