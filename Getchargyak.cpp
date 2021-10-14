#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	int db;
	printf("Kérek egy karaktersorozatot, EOF-ig:\n");
	while((c = getchar()) !=EOF){
		db++;
		putchar(c);
	}
	printf("%d db karaktert adott meg!\n", db);
}
