#include <stdio.h>
#include <string.h>

char *punt = "Data.txt"; //opens the file from the pointer
int main() {
	FILE *arch; //detect the document
	char ant[100];        

	int place;         

	arch = fopen(pointer, "r"); //read document only
	if (arch == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", punt); //if it detects error, it will throw the message and exit the program
		return(8);
	}

	place = 0;
	while (fgets(ant, sizeof(ant), arch)) { /*the document cycle is defined*/
		if (ant[0] == '\n') { /*if an end of line is found*/
			printf("\n");
			place = 0; /*separate and continue the program*/
			continue;
		}

		ant[strlen(ant) - 1] = '\0';        
		switch (place) { /*find the position of the line*/
			case 1:
			case 2:
			case 5:
			case 6:
				printf("%s\n", ant); 
				break;
			case 0:
			case 4:
				printf("%s ", ant);    
				break;
			case 3:
				printf("%s, ", ant); 
				break;
			default:
				printf("Error: unknown field"); 
		}
		++place; 

	}
	fclose(arch); /*closes the document*/

	return(0);
}
