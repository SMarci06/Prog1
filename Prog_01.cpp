#include <stdio.h>
#include <iostream>
 
int main(){
	int a, b, c;
	setlocale(LC_ALL, "hun");
	printf("K�rek egy sz�mot:"); scanf("%d", &a);
	printf("K�rek egy m�sik sz�mot:"); scanf("%d", &b);
	c = a + b;
	printf("�sszead�s: %d + %d = %d\n", a, b, c);
	c = a - b;
	printf("Kivon�s: %d - %d = %d\n", a, b, c);
	c = a * b;
	printf("Szorz�s: %d * %d = %d\n", a, b, c);
	c = a / b;
	printf("Oszt�s: %d / %d = %d\n", a, b, c);
	c = a % b;
	printf("Marad�kos oszt�s: %d %% %d = %d\n", a, b, c);
}
