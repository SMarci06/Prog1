#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b, c;
	setlocale(LC_ALL, "hun");
	printf("Kérek egy számot:"); scanf("%d", &a);
	printf("Kérek egy másik számot:"); scanf("%d", &b);
	c = a + b;
	printf("Összeadás: %d + %d = %d\n", a, b, c);
	c = a - b;
	printf("Kivonás: %d - %d = %d\n", a, b, c);
	c = a * b;
	printf("Szorzás: %d * %d = %d\n", a, b, c);
	c = a / b;
	printf("Osztás: %d / %d = %d\n", a, b, c);
	c = a % b;
	printf("Maradékos osztás: %d %% %d = %d\n", a, b, c);
}
