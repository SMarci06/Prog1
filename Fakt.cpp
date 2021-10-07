#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int n, fakt = 1; 
	printf("Hány faktoriális?\n"); scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		fakt = fakt * i;
	}
	printf("%d! = %d", n, fakt);
}
