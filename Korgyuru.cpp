#include <stdio.h>
#include <iostream>
#define Pi 3.1415
 
int main(){
	float r, R, Ter, ar, osszeg;
	setlocale(LC_ALL, "hun");
	printf("K�rem a k�ls� k�r sugar�t:"); scanf("%f", &R);
	printf("K�rem a bels� k�r sugar�t:"); scanf("%f", &r);
	printf("Mennyibe ker�l az �veg Ft/m2-ben?"); scanf("%f", &ar);
	Ter = Pi * (R * R - r * r); //T = R2p � r2p = p (R2 � r2)
	printf("Az �veggy�r� Ter�lete: %8.0f\n", Ter);
	osszeg = Ter * ar;
	printf("Az �veggy�r� elk�sz�t�s�nek �ra: %8.2f Ft", osszeg);
}
