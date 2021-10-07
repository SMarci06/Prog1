#include <stdio.h>
#include <iostream>
 
int main(){
	int n, i = 0; //Ver: 5.11
	setlocale(LC_ALL, "hun");
	printf("Kérek egy számot!\n"); scanf("%d", &n);
	while(i <= n){
		printf("%d\n", i);
		i++;
	}
	
	i = 0;
	do{
		printf("%d\n", i);
		i++;
	} while(i <= n);
	
	for (i = 0; i <= n; i++){
		printf("%d\n", i);
	}
}
