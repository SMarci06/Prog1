#include <stdio.h>
#include <iostream>
 
int main(){
	int a; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("K�rem a h�nap sz�m�t!\n"); scanf("%d", &a);
	switch (a){
		case 1: printf("Janu�r"); break;
		case 2: printf("Febru�r"); break;
		case 3: printf("M�rcius"); break;
		case 4: printf("�prilis"); break;
		case 5: printf("M�jus"); break;
		case 6: printf("J�nius"); break;
		case 7: printf("J�lius"); break;
		case 8: printf("Augusztus"); break;
		case 9: printf("Szeptember"); break;
		case 10: printf("Okt�ber"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
		default: printf("Hib�s adat"); break;
	}
	printf("\n");
	switch (a){
		case 1: case 2: case 12: printf("T�l"); break;
		case 3: case 4: case 5: printf("Tavasz"); break;
		case 6: case 7: case 8: printf("Ny�r"); break;
		case 9: case 10: case 11: printf("�sz"); break;
		default: printf("Hib�s adat"); break;
	}
}
