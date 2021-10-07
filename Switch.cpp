#include <stdio.h>
#include <iostream>
 
int main(){
	int a; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("Kérem a hónap számát!\n"); scanf("%d", &a);
	switch (a){
		case 1: printf("Január"); break;
		case 2: printf("Február"); break;
		case 3: printf("Március"); break;
		case 4: printf("Április"); break;
		case 5: printf("Május"); break;
		case 6: printf("Június"); break;
		case 7: printf("Július"); break;
		case 8: printf("Augusztus"); break;
		case 9: printf("Szeptember"); break;
		case 10: printf("Október"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
		default: printf("Hibás adat"); break;
	}
	printf("\n");
	switch (a){
		case 1: case 2: case 12: printf("Tél"); break;
		case 3: case 4: case 5: printf("Tavasz"); break;
		case 6: case 7: case 8: printf("Nyár"); break;
		case 9: case 10: case 11: printf("Õsz"); break;
		default: printf("Hibás adat"); break;
	}
}
