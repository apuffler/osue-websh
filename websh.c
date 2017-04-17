/*
 ============================================================================
 Name        : websh.c
 Author      : Armin Puffler
 Description : websh
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char** read_lines(void)
{
	ssize_t size_read = 0;
	char** lptr = NULL;
	while(size_read != -1)
	{
		printf("SIZEREAD: %i \n", (int)size_read);
		fflush(stdout);
		printf("LPTR: %p \n", lptr);
		fflush(stdout);
		size_read = getline(lptr, size_read, stdin);
		printf("LPTR[0]: %s \n", lptr[0]);
		fflush(stdout);

	}

	return lptr;
}


int main(void) {
	

	puts("hello"); /* prints hello */
	char** lptr = NULL;
	lptr = read_lines();
	printf("RETURN VALUE: %s", lptr);
	fflush(stdout);

	return EXIT_SUCCESS;
}



/**
 * Prints program usage and exits with EXIT_FAILURE.
 * @brief Prints program usage and exits with EXIT_FAILURE
 */
void static print_usage_and_exit(void)
{
	(void) fprintf(stderr, "SYNOPSIS:\n\twebsh [-e] [-h] [-s WORD:TAG]\n");
	(void) exit(EXIT_FAILURE);
}
