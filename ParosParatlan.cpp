#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	int paros = 0, paratlan = 0;
	printf("Kérek egy karaktersorozatot, EOF-ig:\n");
	while((c = getchar()) != EOF){
		if(c%2 == 0 && c != '\n') paros++;
		else if(c%2 != 0 && c != '\n') paratlan++;
		//putchar(c);
	}
	printf("%d db páros, és %d db páratlan számot adott meg!", paros, paratlan);
}
