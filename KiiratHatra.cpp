#include <stdio.h>
#include <iostream>
 
int main(){
	setlocale(LC_ALL, "hun");
	int n, i = 0; //Ver: 5.11
	printf("Kérek egy számot!\n"); scanf("%d", &n);
	while(i <= n){
		printf("%d\n", n-i);
		i++;
	}
}
