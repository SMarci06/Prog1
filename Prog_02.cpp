#include <stdio.h>
#include <iostream>
#define Pi 3.1415
 
int main(){
	float r, Ter, Ker;
	setlocale(LC_ALL, "hun");
	printf("K�rem a k�r sugar�t:"); scanf("%f", &r);
	Ter = r * r * Pi;
	Ker = 2 * r * Pi;
	printf("A k�r ker�lete: %8.2f\nA k�r ter�lete: %8.2f", Ker, Ter);
}
