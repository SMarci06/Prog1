#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	int db;
	printf("K�rek egy karaktersorozatot, EOF-ig:\n");
	while((c = getchar())!=EOF){
		putchar(c);
	}
}
