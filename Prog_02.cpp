#include <stdio.h>
#include <iostream>
#define Pi 3.1415
 
int main(){
	float r, Ter, Ker;
	setlocale(LC_ALL, "hun");
	printf("Kérem a kör sugarát:"); scanf("%f", &r);
	Ter = r * r * Pi;
	Ker = 2 * r * Pi;
	printf("A kör kerülete: %8.2f\nA kör területe: %8.2f", Ker, Ter);
}
