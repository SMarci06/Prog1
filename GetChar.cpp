#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	char c;
	printf("K�rek egy karaktersorozatot, ENTER-ig:\n");
	c = getchar();
	while(c!='\n'){
		putchar(c);
		c = getchar();
	}
}
