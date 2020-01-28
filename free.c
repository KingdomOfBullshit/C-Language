#include <stdlib.h>
#include <stdio.h>

int main(){
	int *ptr = malloc(10 * sizeof(*ptr));
	if(ptr != NULL){
		*(ptr + 2) = 50;	/* Assigning it to the sixth Integer in the memory allocation*/
		printf("Value of the 2nd integer is %d \n:", *(ptr +2));
	}
	free(ptr);	/* function used to release/deallocate memory, by freeing memory in your program */
}
