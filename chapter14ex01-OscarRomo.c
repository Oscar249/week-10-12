#include <stdio.h>
#include <stdlib.h>

const char file[] = "input.txt"; /*One for the wor and another one to define*/
const char file2[] = "output.txt";

int main()
{
	int su = 0;/*number of characters to show*/
	FILE *loc; 

	int letter; /*count letter by letter*/

	loc = fopen(file, "r"); 

	if (loc == NULL) {
		printf("Cannot open %s\n", file);
		exit(8); /*if the situation does not work, it will close*/
	}
	while (1) {
		letter = fgetc(loc); 
		if (letter == EOF) /* identifies the character give us an increment of 1*/
			break;
		++su;
	}

	printf("Number of characters in %s is %d\n", file, su); /* prints the screen*/.

	fclose(loc); 
  FILE *loc2;
  loc2 = fopen(file2, "wr");
  fprintf(loc2, "Number of characters in %s is %d\n", file, su); 
  fclose(loc2);
	return 0; /*close the program and save the two documents*/
}

