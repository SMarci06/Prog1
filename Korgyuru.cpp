#include <stdio.h>
#include <iostream>
#define Pi 3.1415
 
int main(){
	float r, R, Ter, ar, osszeg;
	setlocale(LC_ALL, "hun");
	printf("Kérem a külsõ kör sugarát:"); scanf("%f", &R);
	printf("Kérem a belsõ kör sugarát:"); scanf("%f", &r);
	printf("Mennyibe kerül az üveg Ft/m2-ben?"); scanf("%f", &ar);
	Ter = Pi * (R * R - r * r); //T = R2p – r2p = p (R2 – r2)
	printf("Az üveggyûrû Területe: %8.0f\n", Ter);
	osszeg = Ter * ar;
	printf("Az üveggyûrû elkészítésének ára: %8.2f Ft", osszeg);
}
