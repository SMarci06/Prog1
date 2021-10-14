#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	//1 bájton való ábrázolás miatt körbeér a "végtelen"
	
	
	char i;
	unsigned char j=250;
	for(i=0; i<10; j++, i++){
		printf("%d\n", j);
	}
	printf("-----\n");
	
	
	j=5;
	for(i=0; i<10; j--, i++){
		printf("%d\n", j);
	}
	printf("-----\n");
	
	
    char y=122;
	for(i=0; i<10; y++, i++){
		printf("%d\n", y);
	}
	printf("-----\n");
	
	
	float x=1E35;
	for(i=0; i<10; x*=10, i++){
		printf("%f\n", x);
	}
	printf("-----\n");
	
	
	x=1E-35;
	for(i=0; i<20; x/=10, i++){
		printf("%g\n", x);
	}
	printf("-----\n");
}
