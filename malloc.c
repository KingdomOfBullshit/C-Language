#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr;
	ptr = malloc(15 * sizeof(*ptr)); /* A block of 15 integers */

	if(ptr != NULL){
		*(ptr + 5) = 480;	/* Assign 480 to sixth integer */
		printf("Value of the 6th integer is: %d \n", *(ptr + 5));
	}
}
