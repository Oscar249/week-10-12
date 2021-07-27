#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char file[] = "data.txt"; /*Variable generate to store the file name*/

int main()
{
	int number;         
	FILE *one;     
	FILE *three; 
	FILE *non; /*file memory locations*/
	char *line = NULL;   
	size_t len = 0; /*current line length*/  
	one = fopen(file, "r");
	three = fopen("divisible.txt", "w");
	non = fopen("others.txt", "w"); /*open documents*/
	if (one == NULL) {
		printf("Could not find the document -%s- \n",file); /*if this one is not found, command to error*/
		exit(8);
	}
	while (getline(&line, &len, one) != -1){ 
		sscanf(line, "%d", &number); 
		if ((number % 3) == 0)
			fprintf(three, "%d", number);
		else
			fprintf(non, "%d\n", number); 
	}
	free(line);
	fclose(one);
	fclose(three);
	fclose(non);
  printf("Successful operation"); /*close documents and exit*/
	return 0;
}
