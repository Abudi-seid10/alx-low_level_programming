#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n = rand() - RAND_MAX / 2;
	
	if (n>0)
		printf("$d is positive \n", n);
	else id (n<0)
		printf("$d is negative \n", n);
	else
		printf("$d is zero \n", n);
	return(0);
}