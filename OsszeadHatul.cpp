#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int szam, n = 0, ossz = 0; //Ver: 5.11
	do{
		printf("Kérek egy számot!\n"); scanf("%d", &szam);
		ossz += szam;
		n++;
	} while(szam);
	n--;
	printf("A számok összege= %d, az átlaga= %d, a maradék= %d\n", ossz, ossz/n, ossz%n);
}
